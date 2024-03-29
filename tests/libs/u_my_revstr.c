/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_revstr.c
*/
#include <criterion/criterion.h>
#include "my.h"

Test ( my_revstr , check_reverse_string )
{
    char str[] = "bonjour";
    char *dest = malloc(8);

    my_revstr(dest, str);
    cr_assert(!my_strcmp(dest, "ruojnob"));
    FREE(dest);
}

Test ( my_revstr , check_reverse_palindrome_string )
{
    char str[] = "kayak";
    char *dest = malloc(6);

    my_revstr(dest, str);
    cr_assert(!my_strcmp(dest, "kayak"));
    FREE(dest);
}