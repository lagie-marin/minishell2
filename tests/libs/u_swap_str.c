/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_swap_str.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( my_swap_str , check_swap_str )
{
    char str[] = "comment Salut ca va";
    char **array = my_str_to_word_array(str);

    my_swap_str(&array[0], &array[1]);
    cr_assert(!my_strcmp(array[0], "Salut"));
    cr_assert(!my_strcmp(array[1], "comment"));
    // free_strarray(array);
}

