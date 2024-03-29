/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-bsminishell1-marin.lagie
** File description:
** load_env.c
*/
#include "minishell.h"

void load_env(char **env)
{
    Shell->env = str_arraydup(env);
    Shell->len_env = str_arraylen(env);
}
