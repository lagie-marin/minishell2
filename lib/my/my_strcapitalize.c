/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-marin.lagie
** File description:
** my_strcapitalize.c
*/

#include "../../include/my.h"

int upp(char c)
{
    return (c >= 65 && c <= 90) ? 1 : 0;
}

int low(char c)
{
    return (c >= 97 && c <= 122) ? 1 : 0;
}

int digit(char c)
{
    return (c >= 48 && c <= 57) ? 1 : 0;
}

char *my_strcapitalize(char *str)
{
    int al_fw;
    int this;
    int fw;

    str[0] = low(str[0]) ? str[0] - 32 : str[0];
    for (int i = 1; i < my_strlen(str); i++) {
        this = str[i];
        fw = str[i - 1];
        al_fw = low(fw) || upp(fw);
        if (low(this) || upp(this)) {
            str[i] = low(this) && !digit(fw) && !al_fw ? this - 32 : this;
            str[i] = str[i] == this && upp(this) ? this + 32 : str[i];
        }
    }
    return str;
}
