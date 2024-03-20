/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** unload_env.c
*/
#include "../../include/minishell.h"

int unload_env(void)
{
    return free_strarray(Shell->env);
}
