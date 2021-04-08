/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:11:33 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/04/08 20:34:33 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_s_minus(char *str, t_flags *flags, int len)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while ((flags->prec <= len && flags->prec > 0) || (!flags->point && len))
	{
		ft_putchar(str[i++], flags);
		count++;
		flags->prec--;
		len--;
	}
	while ((flags->point && flags->width > count)
		|| (!flags->point && flags->width > count))
	{
		ft_putchar(' ', flags);
		flags->width--;
	}
}

void	ft_printf_s_no_minus(char *str, t_flags *flags, int len)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (flags->prec <= len && flags->prec > 0)
	{
		count++;
		flags->prec--;
	}
	while (!flags->zero && ((flags->point && flags->width > count)
			|| (!flags->point && flags->width > len)))
	{
		ft_putchar(' ', flags);
		flags->width--;
	}
	while (flags->zero && ((flags->point && flags->width > count)
			|| (!flags->point && flags->width > len)))
	{
		ft_putchar('0', flags);
		flags->width--;
	}
	while ((flags->point && count--) || (!flags->point && str[i]))
		ft_putchar(str[i++], flags);
}

void	ft_printf_s(char *str, t_flags *flags)
{
	int	len;

	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	if (flags->prec > len)
		flags->point = 0;
	if (!flags->minus)
		ft_printf_s_no_minus(str, flags, len);
	else if (flags->minus)
		ft_printf_s_minus(str, flags, len);
}
