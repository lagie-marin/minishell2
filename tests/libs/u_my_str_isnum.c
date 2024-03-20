/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_str_isnum.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( my_str_isnum , check_985_isnum )
{
    char str[] = "985";

    cr_assert(my_str_isnum(str));
}

Test ( my_str_isnum , check_n156651_isnum )
{
    char str[] = "-156651";

    cr_assert(my_str_isnum(str));
}

Test ( my_str_isnum , check_5ad_isnum )
{
    char str[] = "5ad";

    cr_assert(!my_str_isnum(str));
}