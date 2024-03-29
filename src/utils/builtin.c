/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** builtin.c
*/
#include "minishell.h"

static int ok_arg(v2f value, commands_t *cmd, int *val)
{
    int len = str_arraylen(&cmd->args[1]);

    if (len >= value.min && (len <= value.max || value.max == -1))
        return 1;
    PUT_ERROR(cmd->path);
    if (len > value.max)
        PUT_ERROR(": Too many arguments.\n");
    else
        PUT_ERROR(": Too few arguments.\n");
    *val = -1;
    return 0;
}

static char *get_content(void)
{
    commands_t *commands = Shell->commands;

    if (commands->args[0] != NULL)
        return commands->args[2];
    return NULL;
}

int builtin(commands_t *cmd)
{
    int val = 0;
    char *path = cmd->path;

    if (!my_strcmp(path, "setenv") && ok_arg((v2f){0, 2}, cmd, &val))
        val = my_setenv(cmd->args[1], get_content());
    if (!my_strcmp(path, "env") && ok_arg((v2f){0, 0}, cmd, &val))
        val = my_env();
    if (!my_strcmp(path, "exit") && ok_arg((v2f){0, 1}, cmd, &val))
        my_kill(path);
    if (!my_strcmp(path, "unsetenv") && ok_arg((v2f){1, -1}, cmd, &val))
        val = my_unsetenv(&cmd->args[1]);
    if (!my_strcmp(path, "cd") && ok_arg((v2f){0, 1}, cmd, &val))
        val = my_cd(cmd->args[1]);
    if (!isatty(STDIN_FILENO) && val == -1)
        exit(1);
    return val;
}
