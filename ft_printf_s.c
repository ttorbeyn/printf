/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:11:33 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/03/26 19:11:34 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_s_minus(char *str, t_flags *flags, int len)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	if (flags->precision > len)
		flags->point = 0;
	while ((flags->precision <= len && flags->precision > 0) || (!flags->point && len))
	{
		ft_putchar(str[i++], flags);
		count++;
		flags->precision--;
		len--;
	}
	while ((flags->point && flags->width > count) || (!flags->point && flags->width > count))
	{
		ft_putchar(' ', flags);
		flags->width--;
	}
}

void	ft_printf_s_no_minus(char *str, t_flags *flags, int len)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (flags->precision > len)
		flags->point = 0;
	while (flags->precision <= len && flags->precision > 0)
	{
		count++;
		flags->precision--;
	}
	while (!flags->zero && ((flags->point && flags->width > count) || (!flags->point && flags->width > len)))
	{
		ft_putchar(' ', flags);
		flags->width--;
	}
	while (flags->zero && ((flags->point && flags->width > count) || (!flags->point && flags->width > len)))
	{
		ft_putchar('0', flags);
		flags->width--;
	}
	while ((flags->point && count) || (!flags->point && str[i]))
	{
		ft_putchar(str[i++], flags);
		count--;
	}
}

void	ft_printf_s(char *str, t_flags *flags)
{
	int len;

	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	if (!flags->minus)
		ft_printf_s_no_minus(str, flags, len);
	else if (flags->minus)
		ft_printf_s_minus(str, flags, len);

}

/*
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
 */
