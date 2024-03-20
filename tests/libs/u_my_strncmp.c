/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strncmp.c
*/
#include "../../include/my.h"
#include <criterion/criterion.h>
#include <string.h>

Test ( my_strncmp , check_string_and_atstrkeb_in_length_3_eq )
{
    char str[] = "string";
    char strn[] = "strkeb";
    int lenght = 3;

    cr_assert(!my_strncmp(str, strn, lenght) == !strncmp(str, strn, lenght));
}

Test ( my_strncmp , check_string_and_atstrkeb_in_length_str_not_eq )
{
    char str[] = "string";
    char strn[] = "strkeb";
    int lenght = my_strlen(str);

    cr_assert(my_strncmp(str, strn, lenght) == strncmp(str, strn, lenght));
}

Test ( my_strncmp , check_null_and_atstrkeb_in_length_3_not_eq )
{
    char strn[] = "strkeb";
    int lenght = 3;

    cr_assert(my_strncmp(0, strn, lenght) == 0);
}
