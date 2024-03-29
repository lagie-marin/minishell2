/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_str_arraydup.c
*/
#include <criterion/criterion.h>
#include "my.h"

Test ( str_arraydup , check_reverse_string )
{
    char str[] = "Bonjour comment sa va";
    char **arr = my_str_to_word_array(str);
    char **cpy_arr = str_arraydup(arr);
    for (int i = 0; arr[i]; i++)
        cr_assert_neq(arr[i], cpy_arr[i], "Memory zones arr[%d] and cpy_arr[%d]", i, i);
    free_strarray(arr);
    free_strarray(cpy_arr);
}

