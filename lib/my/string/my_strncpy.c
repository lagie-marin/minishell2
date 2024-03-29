/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-marin.lagie
** File description:
** my_strncpy.c
*/
#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int len_src = my_strlen(src);
    int i;

    for (i = 0; src[i] != '\0' && i < len_src; i++)
        if (len_src == n || i < n)
            dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
