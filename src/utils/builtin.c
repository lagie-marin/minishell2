/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** builtin.c
*/
#include "../../include/minishell.h"

static int ok_arg(char **args, v2f value, char *error, int *val)
{
    int len = str_arraylen(args);

    if (len >= value.min && (len <= value.max || value.max == -1))
        return 1;
    PUT_ERROR(error);
    if (len > value.max)
        PUT_ERROR(": Too many arguments.\n");
    else
        PUT_ERROR(": Too few arguments.\n");
    *val = -1;
    return 0;
}

static char *get_content(char **args)
{
    if (args[0] != NULL)
        return args[1];
    return 0;
}

int builtin(char *path, char **args)
{
    int val = 0;

    if (!my_strcmp(path, "setenv") && ok_arg(args, (v2f){0, 2}, path, &val))
        val = my_setenv(args[0], get_content(args));
    if (!my_strcmp(path, "env") && ok_arg(args, (v2f){0, 0}, path, &val))
        val = my_env();
    if (!my_strcmp(path, "exit") && ok_arg(args, (v2f){0, 1}, path, &val))
        my_kill(args[0], args - 1);
    if (!my_strcmp(path, "unsetenv") && ok_arg(args, (v2f){1, -1}, path, &val))
        val = my_unsetenv(args);
    if (!my_strcmp(path, "cd") && ok_arg(args, (v2f){0, 1}, path, &val))
        val = my_cd(args[0]);
    if (!isatty(STDIN_FILENO) && val == -1)
        exit(1);
    if (val == 1)
        free_strarray(args - 1);
    return val;
}
