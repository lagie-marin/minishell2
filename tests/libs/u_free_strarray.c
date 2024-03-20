/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_free_strarray.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( free_strarray , check_free_array_with_element )
{
    char *str = "Bonjour comment tu va, je vais bien";
    char **array = my_str_to_word_array(str);

    cr_assert(free_strarray(array));
}

Test ( free_strarray , check_free_null_array )
{
    char **array = NULL;

    cr_assert(free_strarray(array));
}
