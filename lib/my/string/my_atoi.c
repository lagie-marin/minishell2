/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-marin.lagie
** File description:
** my_atoi.c
*/
#include "../../../include/my.h"

int my_atoi(char const *str)
{
    int isnumber = 0;
    int isnegative = 0;
    int num = 0;

    if (!my_strcmp(str, "-2147483648"))
        return -2147483648;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!my_isnum(str[i]) && isnumber == 1)
            break;
        if (str[i] == 45 && str[i + 1] >= 48 && str[i + 1] <= 57) {
            isnegative = 1;
            i++;
        }
        isnumber = 1;
        num = num * 10 + (str[i] - '0');
    }
    return isnegative == 1 ? num * -1 : num;
}
