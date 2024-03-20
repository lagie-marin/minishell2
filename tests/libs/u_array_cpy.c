/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_array_cpy.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( str_arraycpy , check_str_arracpy )
{
    char str[] = "Bonjour comment sa va";
    char **array = my_str_to_word_array(str);
    char **cpy_array = malloc(5 * sizeof(char *));

    str_arraycpy(cpy_array, array);
    for (int i = 0; array[i]; i++)
        cr_assert(!my_strcmp(array[i], cpy_array[i]));
    free_strarray(array);
    free_strarray(cpy_array);
}

