/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strupcase.c
*/
#include <criterion/criterion.h>
#include "my.h"

Test ( my_strupcase , check_str_upper )
{
    char str[] = "iCi";
    my_strupcase(str);
}

