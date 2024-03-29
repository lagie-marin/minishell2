/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** my_getline.c
*/
#include "minishell.h"

ssize_t my_getline(char **input, size_t *len, FILE *stream)
{
    ssize_t bytes = 0;

    bytes = getline(input, len, stream);
    if (bytes == EOF && unload_env()) {
        FREE(Shell);
        exit(0);
    }
    if (*input != NULL)
        (*input)[bytes - 1] = '\0';
    return bytes;
}
