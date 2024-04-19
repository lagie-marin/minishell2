/*
** EPITECH PROJECT, 2024
** minishell2
** File description:
** my_str_is_alphanumeric.c.c
*/
#include <criterion/criterion.h>
#include "my.h"

Test ( my_str_is_alphanumeric , a9GhdB1_is_alphanum )
{
    cr_assert(my_str_is_alphanumeric("a9GhdB1"));
}

Test ( my_str_is_alphanumeric , ata9GhdB1_is_alphanum )
{
    cr_assert(!my_str_is_alphanumeric("@a9GhdB1"));
}
