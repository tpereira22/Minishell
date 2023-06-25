/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:14:33 by marvin            #+#    #+#             */
/*   Updated: 2022/02/27 13:14:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define DEC "0123456789"
# define HEX_U "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// ============================== BONUS ==============================

t_list			*ft_lstnew(void *content);

void			ft_lstadd_front(t_list **lst, t_list *new);

int				ft_lstsize(t_list *lst);

t_list			*ft_lstlast(t_list *lst);

void			ft_lstadd_back(t_list **lst, t_list *new);

void			ft_lstdelone(t_list *lst, void (*del)(void *));

void			ft_lstclear(t_list **lst, void (*del)(void *));

void			ft_lstiter(t_list *lst, void (*f)(void *));

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

// ===================================================================

int				ft_atoi(const char *str);

long long		ft_atoll(const char *str);

void			ft_bzero(void *s, size_t n);

void			*ft_calloc(size_t count, size_t size);

int				ft_isalnum(int c);

int				ft_isalpha(int c);

int				ft_isascii(int c);

int				ft_isdigit(int c);

int				ft_isprint(int c);

char			*ft_itoa(int n);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t n);

void			*ft_memmove(void *dest, const void *src, size_t n);

void			*ft_memset(void *s, int c, size_t n);

void			ft_putchar_fd(char c, int fd);

void			ft_putendl_fd(char *s, int fd);

void			ft_putnbr_fd(int n, int fd);

void			ft_putstr_fd(char *s, int fd);

void			ft_quicksort(long long *numbers, int len);

char			**ft_split(char const *s, char c);

char			*ft_strchr(const char *s, int c);

char			*ft_strdup(const char *s);

void			ft_striteri(char *s, void (*f)(unsigned int,
						char*));

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strjoin_sep(char const *s1, char const *s2,
					char separator);

size_t			ft_strlcat(char *dst, const char *src, size_t size);

size_t			ft_strlcpy(char *dst, const char *src, size_t size);

char			*ft_strncpy(char *dest, char *src, unsigned int n);

size_t			ft_strlen(const char *str);

char			*ft_strmapi(char const *s, char (*f)(unsigned
						int, char));

int				ft_strncmp(const char *s1, const char *s2, size_t n);

int				ft_strcmp(char *s1, char *s2);

char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);

char			*ft_strrchr(const char *s, int c);

char			*ft_strtrim(char const *s1, char const *set);

char			*ft_substr(char const *s, unsigned int start, size_t len);

void			ft_swap(long long *a, long long *b);

int				ft_tolower(int c);

int				ft_toupper(int c);

char			*ft_first_word(const char *str);

char			*ft_last_word(const char *str);

int				ft_printf(const char *str, ...);

char			*get_next_line(int fd);

#endif