#ifndef PRINTF_PRINTF_H
# define PRINTF_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_uitoa(unsigned int n);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);

#endif //PRINTF_PRINTF_H
