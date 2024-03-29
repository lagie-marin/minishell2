/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strcmp.c
*/
#include <criterion/criterion.h>
#include "my.h"

Test ( my_strcmp , check_reverse_string )
{
    cr_assert(my_strcmp("hello", 0));
}

