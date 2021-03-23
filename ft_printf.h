#ifndef PRINTF_FT_PRINTF_H
# define PRINTF_FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct	s_flags
{
	int minus;
	int zero;
	int precision;
	int width;
	int point;
	int count;
}				t_flags;

int		ft_printf(const char *str, ...);

void	ft_putchar(char c, t_flags *flags);
void	ft_putstr(char *s, t_flags *flags);
size_t	ft_strlen(const char *s);
int		ft_isdigit(int c);

char	*ft_uitoa(unsigned int n);
char	*ft_itoa(int n);
int		ft_atoi(const char *str);

void	ft_printf_c(char c, t_flags *flags);
void	ft_printf_s(char *str, t_flags *flags);
void	ft_printf_d(char *str, t_flags *flags);
void	ft_printf_p(unsigned long nbr, t_flags *flags);
void	ft_printf_x(unsigned long nbr, t_flags *flags);
void	ft_printf_xx(unsigned long nbr, t_flags *flags);

#endif //PRINTF_FT_PRINTF_H
