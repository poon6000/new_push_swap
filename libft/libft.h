/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:46:25 by nsangnga          #+#    #+#             */
/*   Updated: 2024/06/29 15:24:46 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <signal.h>
# include <sys/types.h>

/* STRUCT */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* CHECK */

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_isspace(char c);

/* MEMORY */

void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);

/* PRINT */

void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);

/* STRING */

long long	ft_atoll(const char *str);
int			ft_atoi(const char *str);
char		*ft_itoa(int n);
char		**ft_split(char const *s, char c);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s1);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);

size_t		ft_strlcat(char *dst, const char *src, size_t dst_size);
size_t		ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t		ft_strlen(const char *str);

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);

/* LIST */

void		ft_lstadd_back(t_list **lst, t_list *newlst);
void		ft_lstadd_front(t_list **lst, t_list *newlst);
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);

/* Printf */
int			ft_putchar(int c);
int			ft_putstr(char *str);
int			ft_check(va_list *args, char format);
int			ft_process_format(va_list *args, char format);
int			ft_printf(const char *format, ...);
int			ft_put_hex(unsigned long long num, const char *base);
int			ft_put_hexx(unsigned long long num, const char *base, \
			int *printed_len);
int			ft_putnbr_rec(int n, int *len);
int			ft_putnbr_recu(unsigned int n, int *len);
int			ft_putptr(unsigned long long ptr);
int			ft_putint(int n);
int			ft_putu(unsigned int n);
int			ft_putx(unsigned int n);
int			ft_put_upperx(unsigned int n);
int			ft_count_words(const char *s, char c);
void		free_array(char **arr);

#endif
