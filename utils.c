#include "minishell.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
    if (s1[i] || s2[i])
        return (0);
    return (1);
}

int quotes_end(char *str, int i)
{
    if (str[i] == '"')
    {
        i++;
        while (str[i] && str[i] != '"')
            i++;
    }
    else if (str[i] == 39)
    {
        i++;
        while (str[i] && str[i] != 39)
            i++;
    }
    return (i);
}