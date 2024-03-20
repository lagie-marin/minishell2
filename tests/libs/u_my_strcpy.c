/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strcpy.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"
#include <string.h>

Test ( my_strcpy , check_cpy_hello )
{
    char str[] = "hello";
    char *dest = malloc(6);
    char *destn = malloc(6);

    my_strcpy(dest, str);
    strcpy(destn, str);
    cr_assert(!my_strcmp(dest, destn));
    FREE(dest);
}

Test ( my_strcpy , check_cpy_null_caracters )
{
    char str[] = "\0";
    char *dest = malloc(1);
    char *destn = malloc(1);

    my_strcpy(dest, str);
    strcpy(destn, str);
    cr_assert(!my_strcmp(destn, dest));
    FREE(dest);
}
