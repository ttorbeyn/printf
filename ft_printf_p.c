/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:11:22 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/03/27 00:21:08 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_hexa_len(unsigned long nbr)
{
	int	i;

	i = 0;
	while (nbr >= 16)
	{
		nbr = nbr / 16;
		i++;
	}
	i++;
	return (i);
}

static void	ft_print_hexa(unsigned long nbr, t_flags *flags)
{
	char *base;

	base = "0123456789abcdef";
	if (nbr > 15)
		ft_print_hexa(nbr / 16, flags);
	ft_putchar(base[nbr % 16], flags);
}

void	ft_printf_p_no_minus(unsigned long nbr, t_flags *flags, int len)
{
	int	count;

	count = 0;
	len = len + 2;
	if (flags->point)
		flags->zero = 0;
	flags->precision++;
	while (flags->point && --flags->precision > len)
		count++;
	while (flags->zero && flags->width-- > len)
		count++;
	if (!flags->precision && flags->point && !nbr)
		flags->width++;
	while (!flags->zero && flags->width-- > (count + len))
		ft_putchar(' ', flags);
	while (count--)
		ft_putchar('0', flags);
	if (!(!flags->precision && flags->point && !nbr))
	{
		ft_putstr("0x", flags);
		ft_print_hexa(nbr, flags);
	}
}

void	ft_printf_p_minus(unsigned long nbr, t_flags *flags, int len)
{
	int	count;

	count = 0;
	len = len + 2;
	if (flags->point && nbr == 0 && flags->precision == 0 && !flags->width)
		return ;
	while (flags->point && flags->precision > len)
	{
		ft_putchar('0', flags);
		count++;
		flags->precision--;
	}
	if (!(!flags->precision && flags->point && !nbr))
	{
		ft_putstr("0x", flags);
		ft_print_hexa(nbr, flags);
	}
	if (!flags->precision && flags->point && !nbr)
		flags->width++;
	while (flags->width-- > (count + len))
		ft_putchar(' ', flags);
}


void	ft_printf_p(unsigned long nbr, t_flags *flags)
{
	int	len;

	len = count_hexa_len(nbr);
	if (flags->minus)
		ft_printf_p_minus(nbr, flags, len);
	else
		ft_printf_p_no_minus(nbr, flags, len);
}
/*
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
*/
