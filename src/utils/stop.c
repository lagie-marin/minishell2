/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** stop.c
*/
#include "minishell.h"

void stop(char *status, char *path, char **args, char *error)
{
    my_printf("%s%s", path, error);
    my_kill(status, args);
}
