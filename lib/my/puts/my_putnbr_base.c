/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** my_putnbr_base.c
*/

#include "my.h"

int my_putnbr_base(int nbr, char *base)
{
    int len_base = my_strlen(base);
    int val;

    if (nbr < 0) {
        my_putchar('-');
        nbr *= -1;
    }
    val = (nbr % len_base) % len_base;
    nbr /= len_base;
    if (nbr > 0)
        my_putnbr_base(nbr, base);
    my_putchar(base[val]);
    return nbr;
}
