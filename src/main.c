/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** main.c
*/
#include "minishell.h"
#include <string.h>
shell_t *Shell;

static void parsing(char *input)
{
    char *command = strtok(input, ";");

    while (command != NULL) {
        add_command(command);
        command = strtok(NULL, ";");
    }
}

static void play_command(commands_t *cmd)
{
    if (!builtin(cmd))
        execute(cmd);
    if (!isatty(STDIN_FILENO) && cmd->error != 0)
        exit(1);
}

static void minishell(void)
{
    char *input = NULL;
    size_t len = 0;
    commands_t *cmd;

    while (1) {
        if (isatty(STDIN_FILENO))
            my_printf("%s[~%s%s%s ~] %s~⭼ %s", RE, BL, MINI, RE, BL, WH);
        my_getline(&input, &len, stdin);
        parsing(input);
        cmd = Shell->commands;
        while (cmd != NULL) {
            play_command(cmd);
            cmd = cmd->next;
        }
        rm_all_command();
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
    Shell->commands = NULL;
    load_env(env);
    minishell();
    unload_env();
    return 0;
}
