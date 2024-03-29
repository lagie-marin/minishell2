/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-navy-nathan.fievet
** File description:
** str_arraydup.c
*/
#include "my.h"

char **str_arraydup(char **src)
{
    char **cpy_src;

    cpy_src = malloc((str_arraylen(src) + 1) * sizeof(char *));
    return cpy_src == 0 ? 0 : str_arraycpy(cpy_src, src);
}
