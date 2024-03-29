/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_sort_int_array.c
*/
#include <criterion/criterion.h>
#include "my.h"

Test ( my_sort_int_array , check_reverse_arr_int_rand )
{
    int array[] = {5, 8, 12, 3, 7};
    int size = 5;

    my_sort_int_array(array, size);
    for (int i = 1; i < size; i++)
        cr_assert(array[i] >= array[i - 1]);
}

Test ( my_sort_int_array , check_reverse_arr_int_ascending )
{
    int array[] = {0, 3, 5, 6, 9};
    int size = 5;

    my_sort_int_array(array, size);
    for (int i = 1; i < size; i++)
        cr_assert(array[i] >= array[i - 1]);
}

Test ( my_sort_int_array , check_reverse_arr_int_descending )
{
    int array[] = {30, 16, 15, 9, 2};
    int size = 5;

    my_sort_int_array(array, size);
    for (int i = 1; i < size; i++)
        cr_assert(array[i] >= array[i - 1]);
}
