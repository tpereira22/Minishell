#include "minishell.h"

void    lexer(char *str)
{
    int len;

    len = matrix_len(str);
    printf("len - %d\n", len);
}

void    str_parse(char  *str)
{
    lexer(str);
}