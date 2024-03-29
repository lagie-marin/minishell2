/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strncat.c
*/
#include "my.h"
#include <criterion/criterion.h>
#include <string.h>

Test ( my_strncat , check_hello_word_nb_5_is_hello )
{
    char str[] = "hello word";
    int nb = 5;
    char *dest = malloc(nb + 1);
    char *destn = malloc(nb + 1);

    my_strncat(dest, str, nb);
    strncat(destn, str, nb);
    cr_assert(!my_strcmp(dest, destn));
    FREE(dest);
    FREE(destn);
}

