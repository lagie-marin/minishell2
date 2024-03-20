/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_memset.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( my_memset , check_if_memset_work )
{
    int size = 5;
    char *str = my_memset(str, 'a', size);
    int i = 0;

    for (; str[i]; i++)
        cr_assert(str[i] == 'a');
    cr_assert(i == size);
}

