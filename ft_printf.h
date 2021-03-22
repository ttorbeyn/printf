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
	int width;
	int precision;
	int point;
}				t_flags;

int		ft_printf(const char *str, ...);

void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);

char	*ft_uitoa(unsigned int n);
char	*ft_itoa(int n);

void	ft_printf_p(unsigned long nbr);

#endif //PRINTF_FT_PRINTF_H
