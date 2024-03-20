/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_compute_power_rec.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( power , check_nb_5_power_0_res_1 )
{
    int nb = 5;
    int power = 0;

    cr_assert(my_compute_power_rec(nb, power) == 1);
}

Test ( my_compute_power_rec , check_nb_5_power_n1_res_0 )
{
    int nb = 5;
    int power = -1;

    cr_assert(my_compute_power_rec(nb, power) == 0);
}

Test ( my_compute_power_rec , check_nb_5_power_1_res_5 )
{
    int nb = 5;
    int power = 1;

    cr_assert(my_compute_power_rec(nb, power) == nb);
}

Test ( my_compute_power_rec , check_nb_eq_5_power_eq_2_res_25 )
{
    int nb = 5;
    int power = 2;

    cr_assert(my_compute_power_rec(nb, power) == 25);
}
