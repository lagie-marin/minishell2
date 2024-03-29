/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_str_isalpha.c
*/
#include <criterion/criterion.h>
#include "my.h"

Test ( my_str_isalpha , check_if_hello_is_alpha )
{
    char str[] = "hello";

    cr_assert(my_str_isalpha(str));
}

Test ( my_str_isalpha , check_if_EPITECH_is_alpha )
{
    char str[] = "EPITECH";

    cr_assert(my_str_isalpha(str));
}

Test ( my_str_isalpha , check_if_ComPrENsiBle_is_alpha )
{
    char str[] = "ComPrENsiBle";

    cr_assert(my_str_isalpha(str));
}

Test ( my_str_isalpha , str_hello_word_content_not_alpha )
{
    char str[] = "hello word";

    cr_assert(!my_str_isalpha(str));
}
