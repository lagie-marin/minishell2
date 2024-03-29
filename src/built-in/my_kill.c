/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-bsminishell1-marin.lagie
** File description:
** my_kill.c
*/
#include "minishell.h"

void my_kill(char *status)
{
    int stat = status == NULL ? 0 : my_atoi(status);

    rm_all_command();
    unload_env();
    FREE(Shell);
    exit(stat);
}
