/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday07-marin.lagie
** File description:
** my_strlowcase.c
*/
#include "../../include/my.h"

char *my_strlowcase(char *str)
{
    int len_str = my_strlen(str);

    for (int i = 0; i < len_str; i++)
        str[i] = str[i] >= 65 && str[i] <= 90 ? (str[i] + 32) : str[i];
    return str;
}
