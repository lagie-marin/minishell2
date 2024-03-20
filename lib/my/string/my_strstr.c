/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-marin.lagie
** File description:
** my_strstr.c
*/
#include "../../../include/my.h"

char *my_strstr(char *str, char const *to_find)
{
    int passed;
    char *adresse;
    int len_to_find = my_strlen(to_find);
    int len_str = my_strlen(str);

    if (str[0] == '\0' || len_to_find > len_str)
        return 0;
    for (int i = 0; i < len_str && len_to_find < len_str; i++) {
        passed = 0;
        adresse = 0;
        for (int tf = 0; tf < len_to_find; tf++) {
            passed = to_find[tf] == str[i + tf] ? passed + 1 : passed;
            adresse = passed == 1 ? &str[i] : adresse;
        }
        if (passed == len_to_find)
            return adresse;
    }
    return str;
}
