#include "ft_printf.h"

void	ft_printf_d(char *str, t_flags *flags)
{
	int i;
	int p;
	int w;
	int len;
	int len2;

	i = 0;
	p = flags->precision;
	w = flags->width;
	len = ft_strlen(str);
	len2 = ft_strlen(str);
	if (ft_atoi(str) <= 0)
		len--;
	//printf("str : %d\n", ft_atoi(str));
	//printf("point : %d\n", flags->point);
	//printf("precision : %d\n", flags->precision);
	if (ft_atoi(str) != 0 && !flags->precision)
		flags->precision = 1;
	if (!flags->minus)
	{
		//printf("len : %d\n", len);
		while (((w > (flags->precision)) && flags->point) || (!flags->zero && w > len2 && !flags->point))
		{
			ft_putchar(' ', flags);
			w--;
		}
		if (ft_atoi(str) < 0)
			ft_putchar(str[i++], flags);
		while ((p > len) || (flags->zero && w > len2))
		{
			ft_putchar('0', flags);
			p--;
			w--;
		}
		if (ft_atoi(str) == 0 && flags->point && !flags->precision)
			return ;
		else
			ft_putstr(&str[i], flags);
	}
	else if (flags->minus)
	{
		while (p > len)
		{
			ft_putchar('0', flags);
			p--;
		}
		if (!(ft_atoi(str) == 0 && flags->point && !flags->precision))
			ft_putstr(str, flags);
		//printf("len : %d\n", len);
		//printf("width : %d\n", flags->width);
		//printf("precision : %d\n", p);
		while ((flags->width > flags->precision && flags->point && flags->width > len) || (flags->width > len2 && !flags->point))
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
	if (flags->precision > len)
	{
		ft_putchar(str[i++], flags);
		while (flags->precision >= len)
		{
			ft_putchar('0', flags);
			flags->precision--;
		}
	}
	if (flags->width)
	{
		if (flags->minus)
			ft_putstr(str, flags);
		while (flags->width > len)
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