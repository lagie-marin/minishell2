/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_is_smaller.c
*/
#include <criterion/criterion.h>
#include "my.h"

Test ( is_smaller , check_first_is_larger_than_sec )
{
    int array[] = {10, 2, 3};
    int pos = 0;

    cr_assert(pos != is_smaller(pos, array, 3));
}

Test ( is_smaller , check_first_is_smaller_than_sec)
{
    int array[] = {5, 20, 52};
    int pos = 0;

    cr_assert(pos == is_smaller(pos, array, 3));
}

Test ( is_smaller , check_if_list_ascending )
{
    int array[] = {5, 7, 12, 56};

    for (int i = 0; i < 3; i++)
        cr_assert((i >= is_smaller(i, array, 4)));
}

Test ( is_smaller, check_if_list_descending )
{
    int array[] = {56, 12, 7, 5};

    for (int i = 0; i < 3; i++)
        cr_assert(i <= is_smaller(i, array, 4));
}