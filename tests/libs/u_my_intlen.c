/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_intlen.c
*/
#include <criterion/criterion.h>
#include "my.h"

Test ( my_intlen , check_if_len_of_9_is_1 )
{
    cr_assert(my_intlen(9) == 1);
}

Test ( my_intlen , check_if_len_of_19_is_2 )
{
    cr_assert(my_intlen(19) == 2);
}

Test ( my_intlen , check_if_len_of_n20_is_3 )
{
    cr_assert(my_intlen(-20) == 3);
}
