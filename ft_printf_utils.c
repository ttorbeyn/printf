/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:11:56 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/03/27 02:43:51 by hubert           ###   ########.fr       */
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

int		ft_is_specifier(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'u' || c == 'i' || c == 'p'
				|| c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}
