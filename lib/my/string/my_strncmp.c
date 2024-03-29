/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-marin.lagie
** File description:
** my_strncmp.c
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);

    if (!s1 || !s2)
        return 0;
    for (int i = 0; (i < len_s1 || i < len_s2) && i < n; i++) {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    }
    return 0;
}
