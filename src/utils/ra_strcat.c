/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** ra_strcat.c
*/
#include "my.h"

static int slash_exist(char *src, char *fusion)
{
    if (src[0] == fusion[0])
        return 0;
    return 1;
}

char *ra_strcat(char *dest, char *src, char *fusion)
{
    int slash = slash_exist(src, fusion);
    int len_new = LEN(dest) + LEN(src) + slash + 1;
    char *new = malloc(len_new + 1);

    my_strcpy(new, dest);
    if (slash)
        my_strcat(new, fusion);
    my_strcat(new, src);
    new[len_new] = '\0';
    return new;
}
