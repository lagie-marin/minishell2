/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-myls-marin.lagie
** File description:
** into_str.c
*/

#include "../../include/my.h"

int ch_into_str(char *str, char ch)
{
    for (int i = 0; str[i] != 0; i++)
        if (str[i] == ch)
            return 1;
    return 0;
}
