/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday05-marin.lagie
** File description:
** my_compute_power_rec.c
*/
#include "my.h"

int my_compute_power_rec(int nb, int power)
{
    if (power == 0)
        return 1;
    if (power < 0)
        return 0;
    if ((power - 1) == 0)
        return nb;
    return nb * my_compute_power_rec(nb, power - 1);
}
