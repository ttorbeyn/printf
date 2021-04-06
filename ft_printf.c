/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:10:10 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/04/06 10:18:15 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	reset_flags(t_flags *flags)
{
	flags->minus = 0;
	flags->zero = 0;
	flags->point = 0;
	flags->prec = 0;
	flags->width = 0;
	flags->big_x = 0;
	flags->unsign = 0;
}

int	ft_check_flags(int i, const char *str, t_flags *flags, va_list v_list)
{
	while (!ft_is_specifier(str[i]))
	{
		if (str[i] == '-')
		{
			flags->minus = 1;
			i++;
		}
		if (str[i] == '0')
			i = ft_check_zero(i, str, flags);
		if (str[i] == '.')
		{
			flags->point = 1;
			i = ft_check_prec(i, str, flags, v_list);
		}
		if (str[i] == '*')
			i = ft_check_ast(i, flags, v_list);
		if (ft_isdigit(str[i]))
		{
			flags->width = ft_atoi(&str[i]);
			while (ft_isdigit(str[i]))
				i++;
		}
	}
	return (i);
}

int	ft_check_spec(int i, const char *str, t_flags *flags, va_list v_list)
{
	if (str[i] == 'c')
		ft_printf_c(va_arg(v_list, int), flags);
	else if (str[i] == 's')
		ft_printf_s(va_arg(v_list, char *), flags);
	else if (str[i] == 'd' || str[i] == 'i')
		ft_printf_d(ft_itoa(va_arg(v_list, int)), flags);
	else if (str[i] == 'u')
	{
		flags->unsign = 1;
		ft_printf_d(ft_uitoa(va_arg(v_list, int)), flags);
	}
	else if (str[i] == 'p')
		ft_printf_p(va_arg(v_list, unsigned long), flags);
	else if (str[i] == 'x')
		ft_printf_x(va_arg(v_list, unsigned int), flags);
	else if (str[i] == 'X')
	{
		flags->big_x = 1;
		ft_printf_x(va_arg(v_list, unsigned int), flags);
	}
	else if (str[i] == '%')
		ft_printf_c('%', flags);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	v_list;
	t_flags	flags;

	i = 0;
	va_start(v_list, str);
	flags.count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			reset_flags(&flags);
			i = (ft_check_flags(i, str, &flags, v_list));
			i = (ft_check_spec(i, str, &flags, v_list));
		}
		else
			ft_putchar(str[i], &flags);
		i++;
	}
	va_end(v_list);
	return (flags.count);
}
