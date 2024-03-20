/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_str_isupp.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( my_str_isupper , check_PAE_is_upp )
{
    char str[] = "PAE";

    cr_assert(my_str_isupper(str));
}

Test ( my_str_isupper , check_Marin_is_not_upp )
{
    char str[] = "Marin";

    cr_assert(!my_str_isupper(str));
}