/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_put_nbr.c
*/
#include <criterion/criterion.h>
#include "../../include/crit.h"
#include "../../include/my.h"

Test ( my_put_nbr , check_if_8_print_8, .init=redirect_all_stdout )
{
    my_put_nbr(8);
    cr_assert_stdout_eq_str("8", "");
}

Test ( my_put_nbr , check_if_maxn_print_maxn, .init=redirect_all_stdout )
{
    my_put_nbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648", "");
}