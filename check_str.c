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
            while (str[i] && str[i] != '"')
                i++;
            if (!str[i])
                return (0);
        }
        else if (str[i] == 39)
        {
            i++;
            while (str[i] && str[i] != 39)
                i++;
            if (!str[i])
                return (0);
        }
        i++;
    }
    return (1);
}