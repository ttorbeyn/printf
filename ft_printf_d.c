#include "ft_printf.h"

void	ft_printf_d(char *str, t_flags *flags)
{
	int i;

	i = 0;
	if (flags->precision > (int)ft_strlen(str))
	{
		ft_putchar(str[i++]);
		while (flags->precision >= (int)ft_strlen(str))
		{
			ft_putchar('0');
			flags->precision--;
		}
	}
	if (flags->width)
	{
		if (flags->minus)
			ft_putstr(str);
		while (flags->width > (int)ft_strlen(str))
		{
			if (flags->zero)
				ft_putchar('0');
			else
				ft_putchar(' ');
			flags->width--;
		}
	}
	if (flags->minus == 0)
		ft_putstr(&str[i]);
	return ;
}