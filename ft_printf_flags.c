/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:10:43 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/03/27 02:14:02 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_prec(int i, const char *str, t_flags *flags, va_list v_list)
{
	if (ft_atoi(&str[++i]) > 0)
	{
		flags->prec = ft_atoi(&str[i]);
		while (ft_isdigit(str[i]))
			i++;
	}
	else if (str[i] == '*')
	{
		flags->prec = va_arg(v_list, int);
		if (flags->prec < 0)
		{
			flags->point = 0;
			flags->prec = 1;
		}
		i++;
	}
	else if (ft_atoi(&str[i]) == 0)
	{
		flags->prec = 0;
		while (ft_isdigit(str[i]))
			i++;
	}
	else
		flags->prec = 1;
	return (i);
}

int	ft_check_zero(int i, const char *str, t_flags *flags)
{
	flags->zero = 1;
	i++;
	if (ft_atoi(&str[i]) > 0)
	{
		flags->width = ft_atoi(&str[i]);
		while (ft_isdigit(str[i]))
			i++;
	}
	return (i);
}

int	ft_check_ast(int i, t_flags *flags, va_list v_list)
{
	flags->width = va_arg(v_list, int);
	if (flags->width < 0)
	{
		flags->width = -flags->width;
		flags->minus = 1;
	}
	i++;
	return (i);
}
