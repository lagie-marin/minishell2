/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_find_prime_sup.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( my_find_prime_sup , check_prime_nb_closest_7_is_7 )
{
    cr_assert(my_find_prime_sup(7) == 7);
}

Test ( my_find_prime_sup , check_prime_nb_closest_10_is_11 )
{
    cr_assert(my_find_prime_sup(10) == 11);
}

Test ( my_find_prime_sup , check_prime_nb_closest_0_is_2 )
{
    cr_assert(my_find_prime_sup(0) == 2);
}
