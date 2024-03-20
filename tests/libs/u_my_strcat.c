/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strcat.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"
#include <string.h>

Test ( my_strcat , check_cat_hello___word_in_hello_word )
{
    char part[] = "hello";
    char parts[] = " word";
    char *res = malloc(11);
    char *resn = malloc(11);

    my_strcat(res, part);
    my_strcat(res, parts);
    strcat(resn, part);
    strcat(resn, parts);
    cr_assert(!my_strcmp(res, resn));
    FREE(res);
    FREE(resn);
}

