/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_isspace.c
*/
#include "my.h"
#include <ctype.h>
#include <criterion/criterion.h>

Test ( my_isspace , check_space_is_space )
{
    char space = ' ';

    cr_assert(my_isspace(space) == isspace(space) > 0);
}

Test ( my_isspace , check_tab_is_space )
{
    char space = '\t';

    cr_assert(my_isspace(space) == isspace(space) > 0);
}
