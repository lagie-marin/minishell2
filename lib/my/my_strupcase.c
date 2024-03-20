/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday07-marin.lagie
** File description:
** my_strupcase.c
*/
#include "../../include/my.h"

char *my_strupcase(char *str)
{
    int len_str = my_strlen(str);
    char *result = str;

    for (int i = 0; i < len_str; i++)
        result[i] = str[i] >= 97 && str[i] <= 122 ? (str[i] - 32) : str[i];
    return result;
}
