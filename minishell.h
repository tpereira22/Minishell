#ifndef MINISHELL_H
# define MINISHELL_H

#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
#include <unistd.h>

#define YELLOW "\e[1;93m"
#define RESET "\e[0m"

void    sig_handler();
void    ignore_signal();

#endif