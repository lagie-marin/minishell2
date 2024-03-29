/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-marin.lagie
** File description:
** my_strlen.c
*/
#include "my.h"

int my_strlen(char const *str)
{
    int len = 0;

    if (!str)
        return -1;
    for (int i = 0; str[i]; i++)
        len++;
    return len;
}
