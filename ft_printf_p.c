#include "ft_printf.h"

int		count_hexa_len(unsigned int nbr)
{
	int		i;

	i = 2;
	while (nbr >= 16)
	{
		nbr = nbr / 16;
		i++;
	}
	i++;
	return (i);
}

void	ft_print_address(unsigned int nbr, t_flags *flags)
{
	char *base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_print_address(nbr / 16, flags);
		ft_putchar(base[nbr % 16], flags);
	}
	else
		ft_putchar((base[nbr]), flags);
}

void	ft_printf_p(unsigned int nbr, t_flags *flags)
{
	ft_putstr("0x", flags);
	if (flags->precision > count_hexa_len(nbr))
	{
		while (flags->precision > (count_hexa_len(nbr) - 2))
		{
			ft_putchar('0', flags);
			flags->precision--;
		}
	}
	if (flags->width)
	{
		if (flags->minus)
			ft_print_address(nbr, flags);
		while (flags->width > count_hexa_len(nbr))
		{
			if (flags->zero)
				ft_putchar('0', flags);
			else
				ft_putchar(' ', flags);
			flags->width--;
		}
	}
	if (flags->minus == 0)
		ft_print_address(nbr, flags);
	return ;
}
