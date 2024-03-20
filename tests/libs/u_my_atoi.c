/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_atoi.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( my_atoi , check_str_65_return_65_in_int )
{
    char str[] = "65";

    cr_assert(my_atoi(str) == atoi(str));
}

Test ( my_atoi , check_str_0_return_0_in_int )
{
    char str[] = "0";

    cr_assert(my_atoi(str) == atoi(str));
}

Test ( my_atoi , check_str_null_return_0_in_int )
{
    char str[] = "\0";

    cr_assert(my_atoi(str) == atoi(str));
}

Test ( my_atoi , check_str_2147483647_return_2147483647_in_int )
{
    char str[] = "2147483647";

    cr_assert(my_atoi(str) == atoi(str));
}

Test ( my_atoi , check_str_n2147483648_return_n2147483648_in_int )
{
    char str[] = "-2147483648";

    cr_assert(my_atoi(str) == atoi(str));
}

Test ( my_atoi , check_str_52n_return_52n_in_int )
{
    char str[] = "52n";

    cr_assert(my_atoi(str) == atoi(str));
}

Test ( my_atoi , check_str_n2_return_n2_in_int )
{
    char str[] = "-2";

    cr_assert(my_atoi(str) == atoi(str));
}

Test ( my_atoi , check_str_supmax_return_0_in_int )
{
    char str[] = "214665547483648";

    cr_assert(my_atoi(str) == atoi(str));
}