/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strtok.c
*/
#include "../../include/my.h"
#include <criterion/criterion.h>

Test ( my_strtok , check_str_hello_word_fev )
{
    char str[] = "hello word fev";
    char **array = my_strtok(str, ' ');
    int len_array = str_arraylen(array);
    int nb_split = 3;

    cr_assert(len_array == nb_split);
    free_strarray(array);
}

Test ( my_strtok , check_str_hello__word_fev )
{
    char str[] = "hello  word fev";
    char **array = my_strtok(str, ' ');
    int len_array = str_arraylen(array);
    int nb_split = 3;

    cr_assert(len_array == nb_split);
    free_strarray(array);
}
