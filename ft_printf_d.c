#include "ft_printf.h"

void	ft_printf_d_no_minus(char *str, t_flags *flags, int nbr, int len)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	if (nbr < 0)
		flags->precision++;
	if (flags->point)
		flags->zero = 0;
	flags->precision++;
	while (flags->point && --flags->precision > len)
		count++;
	while (flags->zero && flags->width-- > len)
		count++;
	if (!flags->precision && flags->point && !nbr)
		flags->width++;
	while (!flags->zero && flags->width-- > (count + len))
		ft_putchar(' ', flags);
	if (nbr < 0)
		ft_putchar(str[i++], flags);
	while (count--)
		ft_putchar('0', flags);
	if (!(!flags->precision && flags->point && !nbr))
		ft_putstr(&str[i], flags);
}

void	ft_printf_d_minus(char *str, t_flags *flags, int nbr, int len)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	if (nbr < 0)
	{
		ft_putchar(str[i++], flags);
		flags->precision++;
	}
	if (flags->point && nbr == 0 && flags->precision == 0 && !flags->width)
		return ;
	while (flags->point && flags->precision > len)
	{
		ft_putchar('0', flags);
		count++;
		flags->precision--;
	}
	if (!(!flags->precision && flags->point && !nbr))
		ft_putstr(&str[i], flags);
	if (!flags->precision && flags->point && !nbr)
		flags->width++;
	while (flags->width-- > (count + len))
		ft_putchar(' ', flags);
}

void	ft_printf_d(char *str, t_flags *flags)
{
	int nbr;
	int len;

	nbr = ft_atoi(str);
	len = ft_strlen(str);
	if (!flags->minus)
		ft_printf_d_no_minus(str, flags, nbr, len);
	else if (flags->minus)
		ft_printf_d_minus(str, flags, nbr, len);
}
