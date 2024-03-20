/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_itoa.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( my_itoa , check_if_9_return_str9 )
{
    char *str = malloc(3);
    my_itoa(9, str);
    cr_assert(!my_strcmp(str, "9"));
    FREE(str);
}

Test ( my_itoa , check_if_n20_return_strn20 )
{
    char *str = malloc(4);
    my_itoa(-20, str);
    cr_assert(!my_strcmp(str, "-20"));
    FREE(str);
}
