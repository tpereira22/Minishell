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

typedef struct s_check
{
    
}   t_check;

// check_str.c
int check_quotation_marks(char *str);

// tokenizer.c
void    token_cpy(char *str, char **token, int start, int end);
void    fill_matrix(char *str, char ***token_matrix);
int token_len(char *str, int i);
int matrix_len(char *str);
char    **tokenizer(char *str);

// minishell.c
void    sig_handler();
void    ignore_signal();

#endif