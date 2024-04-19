/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** error_file.c
*/
#include "minishell.h"

int error_file(char *path, char *error)
{
    my_printf("%s%s", path, error);
    return 1;
}
