/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** my_getenv.c
*/
#include "minishell.h"

int compare_type(char *str, char *str1)
{
    int i = 0;

    for (i = 0; str1[i]; i++)
        if (str[i] != str1[i])
            return 0;
    return i;
}

char *my_getenv(char *t)
{
    char **env = Shell->env;
    int cmp = 0;

    for (int i = 0; env[i]; i++) {
        cmp = compare_type(env[i], t);
        if (cmp)
            return &env[i][cmp + 1];
    }
    return 0;
}

int var_exist(char *var)
{
    char **env = Shell->env;

    for (int i = 0; env[i]; i++)
        if (compare_type(env[i], var))
            return 1;
    return 0;
}
