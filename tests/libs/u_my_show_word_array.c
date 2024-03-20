/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_show_word_array.c
*/
#include <criterion/criterion.h>
#include "../../include/crit.h"
#include "../../include/my.h"

Test (my_show_word_array, show_null_array, .init=redirect_all_stdout)
{
    char **array = NULL;

    my_show_word_array(array);
    cr_assert_stdout_eq_str("", "");
    free_strarray(array);
}

Test (my_show_word_array, show_hello_word_array, .init=redirect_all_stdout)
{
    char str[] = "hello word";
    char **array = my_str_to_word_array(str);

    my_show_word_array(array);
    cr_assert_stdout_eq_str("hello\nword\n", "");
    free_strarray(array);
}

Test (my_show_word_array, show_content_null_array, .init=redirect_all_stdout)
{
    char **array = {NULL};

    my_show_word_array(array);
    cr_assert_stdout_eq_str("", "");
}
