/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:09:45 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/03/26 23:54:29 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*ft_revstr(char *str)
{
	char			swp;
	unsigned int	i;
	unsigned int	len;

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

static int	ft_countdigit(unsigned int x)
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

char		*ft_uitoa(unsigned int n)
{
	char			*new;
	unsigned int	i;
	unsigned int	c;

	c = ft_countdigit(n);
	if (!(new = malloc(sizeof(char) * (c + 1))))
		return (NULL);
	i = 0;
	while (i < c)
	{
		new[i++] = (n % 10) + '0';
		n = n / 10;
	}
	new[i] = '\0';
	return (ft_revstr(new));
}
