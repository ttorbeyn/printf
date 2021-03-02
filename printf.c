#include "printf.h"

int	ft_printf(const char *str, ...)
{
	int	i;
	va_list	v_list;
	i = 0;
	va_start(v_list, str);

	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				ft_putchar_fd(va_arg(v_list, int), 1);
			if (str[i] == 's')
				ft_putstr_fd(va_arg(v_list, char *), 1);
			if (str[i] == 'd' || str[i] == 'i')
				ft_putstr_fd(ft_itoa(va_arg(v_list, int)), 1);
			if (str[i] == 'u')
				ft_putstr_fd(ft_uitoa(va_arg(v_list, int)), 1);
			if (str[i] == '%')
				ft_putchar_fd('%', 1);
			if (str[i] == 'p')
				ft_putstr_fd(&va_arg(v_list, char *), 1);
		}
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(v_list);
	return (0);
}
