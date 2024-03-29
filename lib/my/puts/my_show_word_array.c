/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday08-marin.lagie
** File description:
** my_show_word_array.c
*/

#include "my.h"

int my_show_word_array(char **tab)
{
    if (!tab)
        return 1;
    for (int i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 1;
}
