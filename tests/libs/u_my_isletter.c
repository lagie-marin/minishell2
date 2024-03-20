/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_isletter.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( my_isletter , check_if_heLlo_compose_of_letter )
{
    char str[] = "heLlo";

    for (int i = 0; str[i]; i++)
        cr_assert(my_isletter(str[i]));
}

