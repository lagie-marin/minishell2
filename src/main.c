/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** main.c
*/
#include "../include/minishell.h"
#include <string.h>

shell_t *Shell;

static void play_command(char **args)
{
    if (args != NULL && !builtin(args[0], &args[1]))
        execute(args[0], args);
    free_strarray(args);
    if (!isatty(STDIN_FILENO) && Shell->error != 0)
        exit(1);
}

static void minishell(void)
{
    char **args;
    char *command;
    char *input = NULL;
    size_t len = 0;

    while (1) {
        if (isatty(STDIN_FILENO))
            my_printf("%s[~%s%s%s ~] %s~⭼ %s", RE, BL, MINI, RE, BL, WH);
        my_getline(&input, &len, stdin);
        command = strtok(input, ";");
        while (command != NULL) {
            args = my_str_to_word_array(command);
            play_command(args);
            command = strtok(NULL, ";");
        }
        FREE(input);
        input = NULL;
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
