/*
** EPITECH PROJECT, 2024
** minishell2
** File description:
** error_file.c
*/
#include "minishell.h"

int error_file(char *path, char *error)
{
    my_printf("%s%s", path, error);
    return 1;
}
