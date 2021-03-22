#include "ft_printf.h"

void	ft_print_address(unsigned long nbr)
{
	char *base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_print_address(nbr / 16);
		ft_putchar(base[nbr % 16]);
	}
	else
		ft_putchar((base[nbr]));
}

void	ft_printf_p(unsigned long nbr)
{
	ft_putstr("0x");
	ft_print_address(nbr);
	return ;
}