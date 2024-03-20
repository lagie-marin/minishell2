/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** ra_strcat.c
*/
#include "../../include/my.h"

char *ra_strcat(char *dest, char *src, char *fusion)
{
    int slash = src[0] == fusion[0] ? 0 : 1;
    int len_new = LEN(dest) + LEN(src) + slash;
    char *new = malloc(len_new + 1);

    my_strcpy(new, dest);
    if (slash)
        my_strcat(new, fusion);
    my_strcat(new, src);
    new[len_new] = '\0';
    FREE(dest);
    return new;
}
