/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-rush2-marin.lagie
** File description:
** my_put_float.c
*/

#include "../../../include/my.h"

void my_put_float(double number, int ndigit)
{
    int nb = get_int(number);
    int len_nb = my_intlen(nb);
    int entier = 0;
    int multi = 1;

    if (number < 0)
        ndigit += 1;
    if (len_nb < ndigit) {
        multi = power(1, ndigit - len_nb);
        entier = get_int((number * multi));
    }
    my_put_nbr(nb);
    my_putchar('.');
    if (number < 0)
        my_put_nbr((entier - (nb * multi)) * -1);
    else
        my_put_nbr(entier - (nb * multi));
}
