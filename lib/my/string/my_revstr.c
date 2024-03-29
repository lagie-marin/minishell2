/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-marin.lagie
** File description:
** my_revstr.c
*/
#include "my.h"

char *my_revstr(char *dest, char const *src)
{
    int lenght_src = my_strlen(src);

    for (int i = (lenght_src - 1); i >= 0; i--) {
        dest[lenght_src - i - 1] = src[i];
    }
    return dest;
}
