/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strdup.c
*/
#include "../../include/my.h"
#include <criterion/criterion.h>
#include <string.h>

Test ( my_strdup , check_dup_house )
{
    char str[] = "house";
    char *res = my_strdup(str);
    char *resn = my_strdup(str);

    cr_assert(!my_strcmp(resn, res));
    FREE(res);
    FREE(resn);
}

Test ( my_strdup , check_dup_null_caracters )
{
    char str[] = "\0";
    char *res = my_strdup(str);
    char *resn = my_strdup(str);

    cr_assert(!my_strcmp(resn, res));
    FREE(res);
    FREE(resn);
}
