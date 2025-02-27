/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:08:35 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/04/06 10:30:37 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*ft_revstr(char *str)
{
	char	swp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		swp = str[i];
		str[i] = str[len];
		str[len] = swp;
		i++;
		len--;
	}
	return (str);
}

static int	ft_countdigit(int x)
{
	size_t	c;

	c = 0;
	if (x == 0)
		return (1);
	while (x != 0)
	{
		x = x / 10;
		c++;
	}
	return (c);
}

static int	ft_isnegative(int n)
{
	int	sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	return (sign);
}

char	*ft_itoa(int n)
{
	char			*new;
	int				i;
	int				c;
	unsigned int	n2;

	i = 1;
	c = ft_countdigit(n);
	if (n < 0 && i++)
		(n2 = -n);
	else
		(n2 = n);
	new = malloc(sizeof(char) * (c + i));
	if (!new)
		return (NULL);
	i = 0;
	while (i < c)
	{
		new[i++] = (n2 % 10) + '0';
		n2 = n2 / 10;
	}
	if (ft_isnegative(n) == -1)
		new[i++] = '-';
	new[i] = '\0';
	return (ft_revstr(new));
}
