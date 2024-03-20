/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** my_itoa.c
*/

#include "../../include/my.h"

void my_itoa(int value, char *buffer)
{
    char *str = buffer;
    int tmp = value;
    int len = 0;

    if (value < 0)
        tmp *= -1;
    len = my_intlen(value);
    str[len] = '\0';
    while ((len > 0 && value >= 0) || (len > 1 && value < 0)) {
        len--;
        str[len] = tmp % 10 + '0';
        tmp /= 10;
    }
    if (value < 0)
        str[len - 1] = '-';
}

void my_nitoa(int value, char *buffer)
{
    char *str = buffer;
    int lenbuf = my_strlen(buffer);
    int len = my_intlen(value) + lenbuf;

    str[len] = '\0';
    while (len > 0 && len > lenbuf) {
        len--;
        str[len] = value % 10 + '0';
        value /= 10;
    }
}
