/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strstr.c
*/
#include "my.h"
#include <criterion/criterion.h>
#include <string.h>

Test ( my_strstr , check_str_to_find_ville )
{
    char str[] = "Nous somme dans une zone de la ville tres speciale";
    char to_find[] = "ville";

    cr_assert(!my_strcmp(my_strstr(str, to_find), strstr(str, to_find)));
}

Test ( my_strstr , check_str_null_to_find_ville )
{
    char str[] = "\0";
    char to_find[] = "ville";

    cr_assert(!my_strcmp(my_strstr(str, to_find), strstr(str, to_find)));
}

Test ( my_strstr , check_str_null_to_null )
{
    char str[] = "\0";
    char to_find[] = "\0";

    cr_assert(!my_strcmp(my_strstr(str, to_find), strstr(str, to_find)));
}

Test ( my_strstr , check_str_truc_to_truc )
{
    char str[] = "truc";
    char to_find[] = "truc";

    cr_assert(!my_strcmp(my_strstr(str, to_find), strstr(str, to_find)));
}