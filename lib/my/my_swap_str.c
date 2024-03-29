/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** my_swap_str.c
*/

#include "my.h"

void my_swap_str(char **a, char **b)
{
    char *temp = *a;

    *a = *b;
    *b = temp;
}
