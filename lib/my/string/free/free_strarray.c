/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-navy-nathan.fievet
** File description:
** free_strarray.c
*/
#include "../../../../include/my.h"

int free_strarray(char **array)
{
    if (array == NULL)
        return 1;
    for (int i = 0; array[i] != NULL; i++)
        FREE(array[i]);
    FREE(array);
    return 1;
}
