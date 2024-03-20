/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_swap_char.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( my_swap_char , check_swap_Tr_inrT )
{
    char str[] = "Tr";

    my_swap_char(&str[0], &str[1]);
    cr_assert(!my_strcmp(str, "rT"));
}

