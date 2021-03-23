#include "ft_printf.h"

void	ft_printf_s(char *str, t_flags *flags)
{
	int i;

	i = 0;
	while (flags->precision)
	{
		ft_putchar(str[i++], flags);
		flags->precision--;
	}
	if (flags->width)
	{
		if (flags->minus)
			ft_putstr(str, flags);
		while (flags->width > (int)ft_strlen(str))
		{
			if (flags->zero)
				ft_putchar('0', flags);
			else
				ft_putchar(' ', flags);
			flags->width--;
		}
	}
	if (flags->minus == 0 && flags->point == 0)
		ft_putstr(str, flags);
	return ;
}
