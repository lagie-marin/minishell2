/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** color_manager.c
*/

char *color_manager(int i)
{
    if (i == 0)
        return "\033[1;31m";
    if (i == 1)
        return "\033[1;34m";
    if (i == 2)
        return "\033[0m";
    return "";
}
