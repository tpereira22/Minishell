#include "minishell.h"

void    tokenizer(char *str)
{
    int i;
    int len;
    int tk_len;

    len = matrix_len(str);
    _input()->token_matrix = malloc(sizeof(char *) * (len + 1));
    _input()->token_matrix[len] = '\0';
    i = 0;
    _input()->index = 0;
    while (str[i])
    {
        while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
            i++;
        if (!(str[i] >= 9 && str[i] <= 13) && str[i] != 32)
        {
            tk_len = token_len(str, i);
            _input()->token_matrix[_input()->index] = malloc(sizeof(char *) * (tk_len + 1));
            ft_memcpy(_input()->token_matrix[_input()->index], str + i, tk_len);
            _input()->token_matrix[_input()->index][tk_len] = '\0';
            i = i + tk_len;
        }
    }
}

void    analyze_and_parse(char  *str)
{
    tokenizer(str);
}