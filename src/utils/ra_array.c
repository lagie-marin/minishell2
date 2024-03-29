/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** ra_array.c
*/
#include "my.h"

char **ra_array(char **array, char *new_line)
{
    char **new = malloc((str_arraylen(array) + 2) * sizeof(char *));
    int i = 0;

    for (i = 0; array[i]; i++)
        new[i] = array[i];
    new[i] = new_line;
    new[i + 1] = NULL;
    return new;
}
