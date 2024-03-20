/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_put_float.c
*/
#include <criterion/criterion.h>
#include "../../include/crit.h"
#include "../../include/my.h"

Test ( my_put_float , check_if_9_2_print_9_2, .init=redirect_all_stdout )
{
    float fl = 9.2;

    my_put_float(fl, 2);
    cr_assert_stdout_eq_str("9.2", "");
}

Test ( my_put_float , check_if_n98_print_n98, .init=redirect_all_stdout )
{
    float fl = -98.0;

    my_put_float(fl, 3);
    cr_assert_stdout_eq_str("-98.0", "");
}
