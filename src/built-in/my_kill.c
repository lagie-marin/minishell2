/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-bsminishell1-marin.lagie
** File description:
** my_kill.c
*/
#include "../../include/minishell.h"

void my_kill(char *status, char **args)
{
    int stat = status == NULL ? 0 : my_atoi(status);

    free_strarray(args);
    unload_env();
    FREE(Shell);
    exit(stat);
}
