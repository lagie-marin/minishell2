/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-bsminishell1-marin.lagie
** File description:
** my_unsetenv.c
*/
#include "../../include/my.h"
#include "../../include/minishell.h"

static void update_env(int cmp, char **new, int i, int *pos)
{
    if (cmp) {
        FREE(Shell->env[i]);
    } else {
        new[*pos] = Shell->env[i];
        (*pos)++;
    }
}

int my_unsetenv(char **args)
{
    char **new = NULL;
    int pos = 0;
    int cmp = 0;

    if (!args[0])
        return 1;
    if (var_exist(*args)) {
        new = malloc(str_arraylen(Shell->env) * sizeof(char *));
        for (int i = 0; Shell->env[i]; i++) {
            cmp = compare_type(Shell->env[i], *args);
            update_env(cmp, new, i, &pos);
        }
        new[pos] = NULL;
        FREE(Shell->env);
        Shell->env = new;
    }
    return my_unsetenv(args + 1);
}
