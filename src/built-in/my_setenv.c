/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** my_setenv.c
*/
#include "../../include/minishell.h"

static int check_syntaxe(char *var)
{
    if (!my_isletter(var[0])) {
        my_printf("setenv%s", VAR_NAME_LETTER);
        return 1;
    }
    if (!my_str_is_alphanumeric(var)) {
        my_printf("setenv%s\n", VAR_NAME_CH);
        return 1;
    }
    return 0;
}

static int change_value(char *new, char *var)
{
    char **env = Shell->env;
    int cmp = 0;

    for (int i = 0; env[i]; i++) {
        cmp = compare_type(env[i], var);
        if (cmp) {
            free(env[i]);
            env[i] = new;
            return 1;
        }
    }
    Shell->env = ra_array(Shell->env, new);
    return 1;
}

int my_setenv(char *var, char *content)
{
    int len;
    char *new = "";

    if ((!var && my_env()) || check_syntaxe(var))
        return 1;
    len = LEN(content);
    new = my_memset(new, '\0', LEN(var) + (len == -1 ? 0 : len) + 2);
    my_strcat(new, var);
    my_strcat(new, "=");
    if (content)
        my_strcat(new, content);
    return change_value(new, var);
}
