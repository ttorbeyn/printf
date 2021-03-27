/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:11:56 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/03/27 02:04:05 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, t_flags *flags)
{
	write(1, &c, 1);
	flags->count = flags->count + 1;
}

void	ft_putstr(char *s, t_flags *flags)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar(s[i], flags);
		i++;
	}
}

int		ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

void	reset_flags(t_flags *flags)
{
	flags->minus = 0;
	flags->zero = 0;
	flags->point = 0;
	flags->precision = 0;
	flags->width = 0;
	flags->big_x = 0;
	flags->unsign = 0;
}