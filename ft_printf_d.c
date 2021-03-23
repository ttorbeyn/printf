#include "ft_printf.h"

void	ft_printf_d(char *str, t_flags *flags)
{
	int i;
	int p;
	int w;

	i = 0;
	p = flags->precision;
	w = flags->width;
//	printf("zero : %d\n", flags->zero);
	if (!flags->minus)
	{
		while ((p > (int)ft_strlen(str)) || (flags->zero && w > (int)ft_strlen(str)))
		{
			ft_putchar('0', flags);
			p--;
			w--;
		}
		while (((w > (flags->precision)) && flags->point) || (!flags->zero && w > (int)ft_strlen(str)))
		{
			ft_putchar(' ', flags);
			w--;
		}
		ft_putstr(str, flags);
	}
	else if (flags->minus)
	{
		while (p > (int)ft_strlen(str))
		{
			ft_putchar('0', flags);
			p--;
		}
		ft_putstr(str, flags);
		while ((flags->width > (flags->precision) && (flags->point)) || flags->width > (int)ft_strlen(str))
		{
			ft_putchar(' ', flags);
			flags->width--;
		}
	}
}

/*
void	ft_printf_d(char *str, t_flags *flags)
{
	int i;

	i = 0;
	if (flags->point && flags->precision == 1 && ft_atoi(str) == 0)
		return ;
	if (flags->precision > (int)ft_strlen(str))
	{
		ft_putchar(str[i++], flags);
		while (flags->precision >= (int)ft_strlen(str))
		{
			ft_putchar('0', flags);
			flags->precision--;
		}
	}
	if (flags->width)
	{
		if (flags->minus)
			ft_putstr(str, flags);
		while (flags->width > (int)ft_strlen(str))
		{
			if (flags->zero != 0)
				ft_putchar('0', flags);
			else
				ft_putchar(' ', flags);
			flags->width--;
		}
	}
	if (flags->minus == 0)
		ft_putstr(&str[i], flags);
	return ;
}
*/