/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday08-marin.lagie
** File description:
** my_sqrt.c
*/

#include "../../include/my.h"

int my_sqrt(int start, int nb)
{
    if ((start * start) < nb)
        return my_sqrt(start + 1, nb);
    if ((start * start) == nb)
        return start;
    return 0;
}
