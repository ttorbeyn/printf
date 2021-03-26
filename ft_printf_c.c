/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:10:34 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/03/26 19:10:36 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_c(char c, t_flags *flags)
{
	if (flags->width)
	{
		if (flags->minus)
			ft_putchar(c, flags);
		while (flags->width > 1)
		{
			if (flags->zero)
				ft_putchar('0', flags);
			else
				ft_putchar(' ', flags);
			flags->width--;
		}
	}
	if (flags->minus == 0 && flags->point == 0)
		ft_putchar(c, flags);
	return ;
}
