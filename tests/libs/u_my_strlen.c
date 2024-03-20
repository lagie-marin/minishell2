/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strlen.c
*/
#include "../../include/my.h"
#include <criterion/criterion.h>
#include <string.h>

Test ( my_strlen , check_len_phone )
{
    char str[] = "phone";

    cr_assert(my_strlen(str) == strlen(str));
}

Test ( my_strlen , check_len_null_str )
{
    char str[] = "\0";

    cr_assert(my_strlen(str) == strlen(str));
}