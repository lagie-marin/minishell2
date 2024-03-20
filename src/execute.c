/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** execute.c
*/
#include "../include/minishell.h"

static void segfault(int status, char **args, char **paths)
{
    char str[my_intlen(status) + 1];

    my_itoa(status, str);
    free_strarray(paths);
    if (WIFSIGNALED(status)) {
        if (WTERMSIG(status) == SIGFPE)
            Shell->exit(str, "", args, FLOAT_EXEP);
        if ((WTERMSIG(status) == SIGSEGV && !WCOREDUMP(status)) ||
            WCOREDUMP(status)) {
            Shell->exit(str, "", args, SEGFAULT);
        }
    }
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

char **get_path(char *path)
{
    char *env_path;
    char **paths;

    if (path == NULL)
        return NULL;
    env_path = my_getenv("PATH");
    paths = my_strtok(env_path, ':');
    for (int i = 0; paths[i]; i++)
        paths[i] = ra_strcat(paths[i], get_cmd(paths[i], path), "/");
    return paths;
}

static int exe(char *path, char *paths, char **args)
{
    if (path[0] == '.' || paths == NULL)
        return execve(path, args, Shell->env);
    return execve(paths, args, Shell->env);
}

static char *get_file_exe(char **paths, char **args, char *path, ssize_t bytes)
{
    int i = 0;
    char *pwd = my_strdup(my_getenv("PWD"));
    int len = 0;

    for (i = 0; paths != NULL && paths[i]; i++)
        if (ACCESS(paths[i]) != -1)
            break;
    len = str_arraylen(paths);
    if (i == len)
        pwd = ra_strcat(pwd, path, "/");
    if (((i == len && ACCESS(pwd) == -1) || bytes == EOF) &&
        !isatty(STDIN_FILENO) && free_strarray(paths))
        Shell->exit("1", path, args, NOT_FOUND);
    if (i != len)
        return paths[i];
    return pwd;
}

void execute(char *path, char **args, ssize_t bytes)
{
    char **paths = get_path(path);
    pid_t pid;
    int status = 0;
    char *file;

    if (path == NULL && free_strarray(args))
        return;
    file = get_file_exe(paths, args, path, bytes);
    pid = fork();
    if (pid == 0 && exe(path, file, args) == -1 && free_strarray(paths)) {
        FREE(file);
        Shell->exit("1", path, args, NOT_FOUND);
    }
    FREE(file);
    wait(&status);
    segfault(status, paths, args);
}
