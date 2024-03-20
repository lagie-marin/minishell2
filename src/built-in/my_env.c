/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-bsminishell1-marin.lagie
** File description:
** my_env.c
*/
#include "../../include/minishell.h"

int my_env(void)
{
    char **env = Shell->env;

    return my_show_word_array(env);
}
