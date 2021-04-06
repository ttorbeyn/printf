/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:10:43 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/04/06 10:27:12 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_d_no_minus(char *str, t_flags *flags, long nbr, int len)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (nbr < 0 && !flags->unsign)
		flags->prec++;
	if (flags->point)
		flags->zero = 0;
	flags->prec++;
	while (flags->point && --flags->prec > len)
		count++;
	while (flags->zero && flags->width-- > len)
		count++;
	if (!flags->prec && flags->point && !nbr)
		flags->width++;
	while (!flags->zero && flags->width-- > (count + len))
		ft_putchar(' ', flags);
	if (nbr < 0 && !flags->unsign)
		ft_putchar(str[i++], flags);
	while (count--)
		ft_putchar('0', flags);
	if (!(!flags->prec && flags->point && !nbr))
		ft_putstr(&str[i], flags);
}

static void	ft_printf_d_minus(char *str, t_flags *flags, long nbr, int len)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (nbr < 0 && !flags->unsign)
	{
		ft_putchar(str[i++], flags);
		flags->prec++;
	}
	if (flags->point && nbr == 0 && flags->prec == 0 && !flags->width)
		return ;
	while (flags->point && flags->prec > len)
	{
		ft_putchar('0', flags);
		count++;
		flags->prec--;
	}
	if (!(!flags->prec && flags->point && !nbr))
		ft_putstr(&str[i], flags);
	if (!flags->prec && flags->point && !nbr)
		flags->width++;
	while (flags->width-- > (count + len))
		ft_putchar(' ', flags);
}

void	ft_printf_d(char *str, t_flags *flags)
{
	long	nbr;
	int		len;

	if (!str)
		return ;
	nbr = ft_atoi(str);
	len = ft_strlen(str);
	if (!flags->minus)
		ft_printf_d_no_minus(str, flags, nbr, len);
	else if (flags->minus)
		ft_printf_d_minus(str, flags, nbr, len);
	free(str);
	str = NULL;
}
