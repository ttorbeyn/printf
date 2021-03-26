#include "ft_printf.h"

/*
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
	//if (ft_atoi(str) <= 0)
	//	len--;
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
		//printf("len : %d\n", len);
		//printf("width : %d\n", flags->width);
		//printf("precision : %d\n", p);
		while ((p > len2) || (flags->zero && w > len2))
		{
			//if (ft_atoi(str) <= 0)
			//	len--;
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
		if (ft_atoi(str) < 0)
			len--;
		while (p > len)
		{
			ft_putchar('0', flags);
			p--;
		}
		if (!(ft_atoi(str) == 0 && flags->point && !flags->precision))
			ft_putstr(str, flags);

		while ((flags->width > flags->precision && flags->point && flags->width > len) || (flags->width > len2 && !flags->point))
		{
			ft_putchar(' ', flags);
			flags->width--;
		}
	}
}
*/

void	ft_printf_d_no_minus(char *str, t_flags *flags, int nbr, int len)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	if (nbr < 0)
		flags->precision++;
	if (flags->point)
		flags->zero = 0;
	while (flags->point && flags->precision > len)
	{
		count++;
		flags->zero = 0;
		flags->precision--;
	}
	while (flags->zero && flags->width > len)
	{
		count++;
		flags->width--;
	}
	if (!flags->precision && flags->point && !nbr)
		flags->width++;
	while (!flags->zero && flags->width > (count + len))
	{
		ft_putchar(' ', flags);
		flags->width--;
	}
	if (nbr < 0)
		ft_putchar(str[i++], flags);
	while (count)
	{
		ft_putchar('0', flags);
		count--;
	}
	if (!(!flags->precision && flags->point && !nbr))
		ft_putstr(&str[i], flags);
}

void	ft_printf_d_minus(char *str, t_flags *flags, int nbr, int len)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	if (nbr < 0)
	{
		ft_putchar(str[i++], flags);
		flags->precision++;
	}
	if (flags->point && nbr == 0 && flags->precision == 0 && !flags->width)
		return ;
	while (flags->point && flags->precision > len)
	{
		ft_putchar('0', flags);
		count++;
		flags->precision--;
	}
	//printf("nbr : %d\n", nbr);
	if (!(!flags->precision && flags->point && !nbr))
		ft_putstr(&str[i], flags);
	if (!flags->precision && flags->point && !nbr)
		flags->width++;
	//printf("count : %d\n", count);
	//printf("len : %d\n", len);
	//printf("width : %d\n", flags->width);
	while (flags->width > (count + len))
	{
		ft_putchar(' ', flags);
		flags->width--;
	}
}

void	ft_printf_d(char *str, t_flags *flags)
{
	int nbr;
	int len;

	nbr = ft_atoi(str);
	len = ft_strlen(str);
	if (!flags->minus)
		ft_printf_d_no_minus(str, flags, nbr, len);
	else if (flags->minus)
		ft_printf_d_minus(str, flags, nbr, len);
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
