/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** my_str_is_alphanumeric.c
*/
#include "../../include/my.h"

int my_str_is_alphanumeric(char *str)
{
    for (int i = 0; str[i]; i++)
        if (!is_alphanumeric(str[i]))
            return 0;
    return 1;
}
