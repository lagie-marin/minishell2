/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_get_int.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( get_int , check_get_int_9_995_in_9 )
{
    float fl = 9.999999;

    cr_assert(get_int(fl) == 9);
}

Test ( get_int , check_get_int_5_4_in_9 )
{
    float fl = 5.4;

    cr_assert(get_int(fl) == 5);
}

Test ( get_int , check_get_int_n20_896_in_20 )
{
    float fl = -20.999999;

    cr_assert(get_int(fl) == -20);
}

Test ( get_int , check_get_int_n30_12_in_30 )
{
    float fl = -30.12;

    cr_assert(get_int(fl) == -30);
}
