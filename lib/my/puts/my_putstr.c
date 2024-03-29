/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-marin.lagie
** File description:
** my_putstr.c
*/
#include "my.h"


int my_putstr(char const *str)
{
    if (str[0] == '\0')
        return (0);
    write(1, str, LEN(str));
    return (0);
}
