/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_str_isprintable.c
*/
#include "my.h"
#include <criterion/criterion.h>

Test ( my_str_isprintable , check_str_Bjd5sd46_is_printable )
{
    char str[] = "Bjd5sd46!";

    cr_assert(my_str_isprintable(str));
}

Test ( my_str_isprintable , check_str_Bjd5sd46_is_not_printable )
{
    char str[] = "Bjd\t5sd46!";

    cr_assert(!my_str_isprintable(str));
}
