/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strlowcase.c
*/
#include "../../include/my.h"
#include <criterion/criterion.h>

Test ( my_strlowcase , check_Carte_eq_carte )
{
    char str[] = "Carte";

    my_strlowcase(str);
    cr_assert(!my_strcmp(str, "carte"));
}

Test ( my_strlowcase , check_null_str )
{
    char str[] = "\0";

    my_strlowcase(str);
    cr_assert(!my_strcmp(str, ""));
}