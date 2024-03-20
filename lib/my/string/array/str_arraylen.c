/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-navy-nathan.fievet
** File description:
** str_arraylen.c
*/
#include "../../../../include/my.h"

int str_arraylen(char **src)
{
    int len = 0;

    if (src == NULL)
        return 0;
    while (src[len])
        len++;
    return len;
}
