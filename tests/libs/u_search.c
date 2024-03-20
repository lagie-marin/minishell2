/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_search.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( search , check_reverse_string )
{
    cr_assert(search(1, 850) == 853);
}

