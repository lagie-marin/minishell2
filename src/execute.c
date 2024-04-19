/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** execute.c
*/
#include "../include/minishell.h"

static void segfault(int status, char *path, char **args)
{
    char str[my_intlen(status) + 1];

    my_itoa(status, str);
    if (WIFSIGNALED(status)) {
        if (WTERMSIG(status) == SIGFPE)
            Shell->exit(str, path, args, FLOAT_EXEP);
        if ((WTERMSIG(status) == SIGSEGV && !WCOREDUMP(status)) ||
            WCOREDUMP(status)) {
            Shell->exit(str, path, args, SEGFAULT);
        }
    }
    FREE(path);
}

static char *destroy_path(char *path_command, int error)
{
    FREE(path_command);
    Shell->error = error;
    return NULL;
}

static char *command_on_project(char *filename)
{
    char *pwd = my_strdup(my_getenv("PWD"));
    char *path_command = ra_strcat(pwd, filename, "/");
    struct stat s;

    FREE(pwd);
    if (ACCESS(path_command) == -1)
        return destroy_path(path_command, 1);
    stat(path_command, &s);
    if (IS_EXE(path_command) == -1 || S_ISDIR(s.st_mode))
        return destroy_path(path_command, 2);
    return path_command;
}

static char *get_cmd(char *env_path, char *path)
{
    int pos = 0;

    for (int i = 0; env_path[i]; i++) {
        if (env_path[i] == path[pos])
            pos++;
        else
            pos = 0;
    }
    return &path[pos];
}

static char *command_on_bins(char *filename)
{
    char *path = getenv("PATH");
    char **bins = my_strtok(path, ':');
    char *bin;

    for (int i = 0; bins[i]; i++) {
        bin = ra_strcat(bins[i], get_cmd(bins[i], filename), "/");
        if (IS_EXE(bin) == 0) {
            free_strarray(bins);
            Shell->error = 0;
            return bin;
        } else
            Shell->error = 2;
        if (ACCESS(bin) == -1) {
            printf("bin: %s\n", bin);
            Shell->error = 1;
        }
        FREE(bin);
    }
    free_strarray(bins);
    return NULL;
}

static char *get_file_path(char *path)
{
    char *bin = command_on_project(path);

    if (path[0] != '.' && path[1] != '/' && bin == NULL && Shell->error != 3)
        bin = command_on_bins(path);
    if (bin != NULL)
        return bin;
    if (Shell->error == 1)
        error_file(path, NOT_FOUND);
    if (Shell->error == 2 || Shell->error == 3)
        error_file(path, PERM_DENIED);
    return NULL;
}

void execute(char *path, char **args)
{
    char *bin = get_file_path(path);
    pid_t pid;
    int status = 0;

    if (bin == NULL)
        return;
    pid = fork();
    if (pid == 0)
        execve(bin, args, Shell->env);
    waitpid(pid, &status, 0);
    segfault(status, bin, args);
}
