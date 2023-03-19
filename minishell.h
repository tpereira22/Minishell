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

typedef struct s_input
{
    char    *command;
    char    **token_matrix;
    int index;
    int qt_flag;
}   t_input;

// check_str.c
int check_qt_marks(char *str, int i);
void    check_if_complete(char  *str);
int check_pipe_done(char *str, int i);

// get_input.c
void    get_input();
void    loop_promt(char *str, int qt);

// str_parse.c
void    analyze_and_parse(char *str);
void    tokenizer(char *str);

// tokenizer.c
void    free_token(char **token_matrix);
int token_len(char *str, int i);
int matrix_len(char *str);
int qt_len(char *str, int i);

// utils.c
void	*ft_memcpy(void *dest, const void *src, size_t n);
int quotes_end(char *str, int i);
int ft_strcmp(const char *s1, const char *s2);
char    *ft_strjoin(char *s1, char *s2);
size_t  ft_strlen(char *str);
char    *ft_strcpy(char *str);
t_input *_input(void);

// minishell.c
void    sig_handler();
void    ignore_signal();
int check_newline(char *str);

#endif