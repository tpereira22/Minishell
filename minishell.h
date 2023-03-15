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
void    free_token(char **token_matrix);
int fill_matrix(char *str, char ***token_matrix);
int token_len(char *str, int i);
int matrix_len(char *str);
char    **tokenizer(char *str);

// utils.c
void	*ft_memcpy(void *dest, const void *src, size_t n);
int quotes_end(char *str, int i);
int ft_strcmp(const char *s1, const char *s2);

// minishell.c
void    sig_handler();
void    ignore_signal();
int check_newline(char *str);

#endif