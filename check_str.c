#include "minishell.h"

int check_quotation_marks(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '"')
        {
            i++;
            while (str[i] != '"' && str[i] != '\0')
                i++;
            if (str[i] == '\0')
                return (0);
        }
        i++;
    }
    return (1);
}