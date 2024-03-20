/*
** EPITECH PROJECT, 2024
** $dirname
** File description:
** my_gcvt.c
*/
#include "../../../include/my.h"

char *my_gcvt(double number, int ndigit, char *buf)
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
    my_itoa(nb, buf);
    buf[len_nb] = '.';
    buf[my_intlen(entier + 1)] = '\0';
    if (number < 0)
        my_nitoa((entier - (nb * multi)) * -1, buf);
    else
        my_nitoa(entier - (nb * multi), buf);
    return buf;
}
