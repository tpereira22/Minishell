#include "minishell.h"
#include "../libft/libft.h"

// void    token_cpy(char *str, char **token, int start, int end)
// {
//     int i;

//     i = 0;
//     printf("start - %d | end - %d\n", start, end);
//     while (start < end)
//         *token[i++] = str[start++];
//     token[i] = '\0';
// }

int token_len(char *str, int i)
{
    while (str[i] && !(str[i] >= 9 && str[i] <= 13) && str[i] != 32)
        i++;
    return (i);
}

void    fill_matrix(char *str, char ***token_matrix)
{
    int i;
    int end;

    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i])
    {
        if (!(str[i] >= 9 && str[i] <= 13) && str[i] != 32)
        {
            end = token_len(str, i);
            *token_matrix = malloc(sizeof(**token_matrix) * end - i + 2);
            //token_cpy(str, token_matrix[index], i, end);
            ft_memcpy(*token_matrix, str + i, end - i + 1);
            token_matrix++;
            i = end;
        }
        i++;
    }
}

int matrix_len(char *str)
{
    int i;
    int len;

    i = 0;
    len = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i])
    {
        if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        {
            len++;
            while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
                i++;
            if (str[i] == '\0')
                break ;
        }
        i++;
    }
    if (str[i] == '\0' && str[i-1] != 32 && str[i-1] != 9 && str[i-1] != 13)
        len++;
    return (len);
}

char    **tokenizer(char *str)
{
    char **token_matrix;
    int len;

    len = matrix_len(str);
    token_matrix = malloc(sizeof(*token_matrix) * len + 1);
    if (!token_matrix)
        return (NULL);
    fill_matrix(str, &token_matrix);
    return (token_matrix);
}