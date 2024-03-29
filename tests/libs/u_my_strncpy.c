/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strncpy.c
*/
#include "my.h"
#include <criterion/criterion.h>
#include <string.h>

Test ( my_strncpy , check_hello_word_with_n_5 )
{
    char str[] = "hello word";
    int n = 5;
    char *dest = malloc(n + 1);
    char *destn = malloc(n + 1);

    my_strncpy(dest, str, n);
    strncpy(destn, str, n);
    cr_assert(!my_strcmp(dest, destn));
    FREE(dest);
    FREE(destn);
}

Test ( my_strncpy , check_hello_word_with_n_11 )
{
    char str[] = "hello word";
    int n = 11;
    char *dest = malloc(n + 1);
    char *destn = malloc(n + 1);

    my_strncpy(dest, str, n);
    strncpy(destn, str, n);
    cr_assert(!my_strcmp(dest, destn));
    FREE(dest);
    FREE(destn);
}