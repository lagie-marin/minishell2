/*
** EPITECH PROJECT, 2024
** minishell2
** File description:
** my_strtok.c
*/
#include "my.h"

static int nb_element(char const *str, char const delim)
{
    int len = 0;
    int nb_char = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] != delim)
            nb_char++;
        if (nb_char > 0 && str[i] == delim) {
            len++;
            nb_char = 0;
        }
    }
    if (nb_char > 0)
        len++;
    return len;
}

static int len_word(char const *str, char const delim)
{
    int len = 0;

    for (; str[len] != delim; len++);
    return len;
}

char **my_strtok(const char *str, char const delim)
{
    int len_array = nb_element(str, delim);
    char **array = malloc((len_array + 1) * sizeof(char *));

    if (array == NULL)
        return NULL;
    for (int y = 0; y < len_array; y++) {
        for (; *str == delim; str++);
        array[y] = my_memset(array[y], '\0', len_word(str, delim) + 1);
        for (int x = 0; *str != delim; x++) {
            array[y][x] = *str;
            str++;
        }
    }
    array[len_array] = NULL;
    return array;
}
