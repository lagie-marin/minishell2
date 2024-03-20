/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-marin.lagie
** File description:
** my_sort_int_array.c
*/
#include "../../../../include/my.h"

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < (size - 1); i++) {
        if (i < is_smaller(i, array, size))
            my_swap(&array[i], &array[is_smaller(i, array, size)]);
    }
}
