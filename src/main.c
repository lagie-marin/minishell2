/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** main.c
*/
#include "../include/minishell.h"

shell_t *Shell;

static char **parsing(char *input)
{
    char **command;
    char **commands;
    int i = 0;

    command = my_strtok(input, ';');
    commands = malloc(str_arraylen(command) * sizeof(char **));
    for (; command[i]; i++)
        commands[i] = my_str_to_word_array(command[i]);
    commands[i] = NULL;
    free_strarray(command);
    return commands;
}

static void minishell(void)
{
    char **args;
    char *input = NULL;
    size_t len = 0;
    ssize_t bytes = 0;

    while (1) {
        if (isatty(STDIN_FILENO))
            my_printf("%s[~%s%s%s ~] %s~⭼ %s", RE, BL, MINI, RE, BL, WH);
        bytes = my_getline(&input, &len, stdin);
        args = my_str_to_word_array(input);
        FREE(input);
        input = NULL;
        if (args != NULL && !builtin(args[0], &args[1]))
            execute(args[0], args, bytes);
    }
}

int main(int ac, char const **av, char **env)
{
    if (ac > 2 || !av[0])
        return 84;
    Shell = malloc(sizeof(shell_t));
    Shell->exit = &stop;
    load_env(env);
    minishell();
    unload_env();
    return 0;
}
