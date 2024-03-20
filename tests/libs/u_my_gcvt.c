/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_gcvt.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( my_gcvt , check_my_gcvt_fl_1_23456_ndigit_4_res_1_2345 )
{
    float fl = 1.23456;
    int ndigit = 4;
    char *str = malloc(7);

    my_gcvt(fl, ndigit, str);
    cr_assert(!my_strcmp(str, "1.234"));
    FREE(str);
    return;
}

Test ( my_gcvt , check_my_gcvt_fl_n2_345_ndigit_2_res_n2_345 )
{
    float fl = -2.345;
    int ndigit = 2;
    char *str = malloc(5);

    my_gcvt(fl, ndigit, str);
    cr_assert(!my_strcmp(str, "-2.3"));
    FREE(str);
    return;
}