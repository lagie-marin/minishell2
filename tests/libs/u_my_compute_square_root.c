/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_compute_square_root.c
*/
#include <criterion/criterion.h>
#include "my.h"

Test ( my_compute_square_root , square_root_of_9_is_3 )
{
    cr_assert(my_compute_square_root(9) == 3);
}

Test ( my_compute_square_root , square_root_of_5_is_0 )
{
    cr_assert(my_compute_square_root(5) == 0);
}

Test ( my_compute_square_root , square_root_of_n5_is_0 )
{
    cr_assert(my_compute_square_root(-5) == 0);
}
