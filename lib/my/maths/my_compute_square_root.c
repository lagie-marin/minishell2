/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday05-marin.lagie
** File description:
** my_compute_square_root.c
*/
#include "../../../include/my.h"

int my_compute_square_root(int nb)
{
    if (nb < 0)
        return 0;
    return my_sqrt(1, nb);
}
