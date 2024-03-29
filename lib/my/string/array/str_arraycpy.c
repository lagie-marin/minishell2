/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-navy-nathan.fievet
** File description:
** str_arraycpy.c
*/
#include "my.h"

char **str_arraycpy(char **dest, char **src)
{
    int i = 0;

    while (src[i]) {
        dest[i] = my_strdup(src[i]);
        i++;
    }
    dest[i] = NULL;
    return dest;
}
