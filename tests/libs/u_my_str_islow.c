/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_str_islow.c
*/
#include "../../include/my.h"
#include <criterion/criterion.h>

Test ( my_str_islower , check_str_epitech_is_low )
{
    char str[] = "epitech";

    cr_assert(my_str_islower(str));
}

Test ( my_str_islower , check_str_Lyon_is_not_low )
{
    char str[] = "Lyon";

    cr_assert(!my_str_islower(str));
}
