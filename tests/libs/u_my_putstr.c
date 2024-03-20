/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_putstr.c
*/
#include <criterion/criterion.h>
#include "../../include/crit.h"
#include "../../include/my.h"

Test ( my_putstr , print_null_string, .init=redirect_all_stdout )
{
    my_putstr("\0");
    cr_assert_stdout_eq_str("", "");
}

