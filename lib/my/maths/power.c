/*
** EPITECH PROJECT, 2024
** $dirname
** File description:
** power.c
*/
#include "../../../include/my.h"

int power(int n, int p)
{
    int res = n;

    for (int i = 0; i < p; i++)
        res *= 10;
    return res;
}
