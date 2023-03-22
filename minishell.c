#include "minishell.h"

// changes Ctrl+C to \n
void    sig_handler()
{
    write(1, "\n", 1);
    rl_replace_line("", 0);
    rl_on_new_line();
    rl_redisplay();
}

void    ignore_signal()
{
    signal(SIGINT, sig_handler);
    signal(SIGTSTP, SIG_IGN);
    signal(SIGSEGV, SIG_IGN);
    //signal(SIGTSTP, SIG_IGN);
}

int	main(void)
{	
    // int i;
    // int j;

    ignore_signal();
	while (1)
	{
        get_input();
        printf("str - %s\n", _input()->command);
        //analyze_and_parse(_input()->command);
        free(_input()->command);
        //i = 0;
        // while (token_matrix[i] != NULL)
        // {
        //     j = 0;
        //     printf("heeey\n");
        //     while (token_matrix[i][j] != '\0')
        //     {
        //         printf("%c", token_matrix[i][j]);
        //         j++;
        //     }
        //     printf("\n");
        //     i++;
        // }
        //printf("\n");
        // free_token(token_matrix);
	}
	return (0);
}