/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** execute.c
*/
#include "minishell.h"

static void segfault(int status, char *path)
{
    char str[my_intlen(status) + 1];

    my_itoa(status, str);
    if (WIFSIGNALED(status)) {
        if (WTERMSIG(status) == SIGFPE)
            Shell->exit(str, path, FLOAT_EXEP);
        if ((WTERMSIG(status) == SIGSEGV && !WCOREDUMP(status)) ||
            WCOREDUMP(status)) {
            Shell->exit(str, path, SEGFAULT);
        }
    }
    FREE(path);
}

static char *destroy_path(char *path_command, commands_t *cmd, int error)
{
        cmd->error = error;
        FREE(path_command);
        return NULL;
}

static char *command_on_project(char *filename, commands_t *cmd)
{
    char *pwd = my_strdup(my_getenv("PWD"));
    char *path_command = ra_strcat(pwd, filename, "/");
    struct stat s;

    FREE(pwd);
    if (ACCESS(path_command) == -1)
        return destroy_path(path_command, cmd, 1);
    stat(path_command, &s);
    if (IS_EXE(path_command) == -1)
        return destroy_path(path_command, cmd, 2);
    if (S_ISDIR(s.st_mode))
        return destroy_path(path_command, cmd, 3);
    return path_command;
}

static char *command_on_bins(char *filename, commands_t *cmd)
{
    char *path = getenv("PATH");
    char **bins = my_strtok(path, ':');
    char *bin;

    for (int i = 0; bins[i]; i++) {
        bin = ra_strcat(bins[i], filename, "/");
        if (IS_EXE(bin) == 0) {
            free_strarray(bins);
            cmd->error = 0;
            return bin;
        } else
            cmd->error = 2;
        if (ACCESS(bin) == -1)
            cmd->error = 1;
        FREE(bin);
    }
    free_strarray(bins);
    return NULL;
}

static char *get_file_path(commands_t *cmd)
{
    char *path = cmd->path;
    char *bin = command_on_project(path, cmd);

    if (path[0] != '.' && path[1] != '/' && bin == NULL && cmd->error != 3)
        bin = command_on_bins(path, cmd);
    if (bin != NULL)
        return bin;
    if (cmd->error == 1)
        error_file(path, NOT_FOUND);
    if (cmd->error == 2 || cmd->error == 3)
        error_file(path, PERM_DENIED);
    return NULL;
}

void execute(commands_t *cmd)
{
    char *bin = get_file_path(cmd);
    pid_t pid;
    int status = 0;

    if (bin == NULL)
        return;
    pid = fork();
    if (pid == 0)
        execve(bin, cmd->args, Shell->env);
    waitpid(pid, &status, 0);
    segfault(status, bin);
}
