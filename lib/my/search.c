/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday08-marin.lagie
** File description:
** search.c
*/

#include "../../include/my.h"

int search(int i, int nb)
{
    int big = my_is_prime(nb + i);

    if (nb == 0 || nb == 1)
        return 2;
    if (my_is_prime(nb))
        return nb;
    if (!big)
        return search(i + 1, nb);
    return nb + i;
}
