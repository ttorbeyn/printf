#include "ft_printf.h"

void	reset_flags(t_flags *flags)
{
	flags->minus = 0;
	flags->zero = 0;
	flags->point = 0;
	flags->precision = 0;
	flags->width = 0;
	return ;
}

int		ft_check_flags(int i, const char *str, t_flags *flags, va_list v_list)
{
	if (str[i] == '-')
	{
		flags->minus = 1;
		i++;
	}
	if (str[i] == '0')
	{
		flags->zero = 1;
		i++;
	}
	if (str[i] == '*')
	{
		flags->width = va_arg(v_list, int);
		i++;
	}
	if (str[i] == '.')
	{
		flags->point = 1;
		i++;
		flags->precision = ft_atoi(&str[i]);
		while (ft_isdigit(str[i]))
			i++;
	}
	if (ft_isdigit(str[i]))
	{
		flags->width = ft_atoi(&str[i]);
		while (ft_isdigit(str[i]))
			i++;
	}
	return (i);
}

int		ft_printf(const char *str, ...)
{
	int	i;
	va_list	v_list;
	t_flags	*flags;

	i = 0;
	va_start(v_list, str);
	flags = malloc(sizeof(t_flags));
	reset_flags(flags);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			i = (ft_check_flags(i, str, flags, v_list));
			if (str[i] == 'c')
				ft_putchar(va_arg(v_list, int));
			if (str[i] == 's')
				ft_printf_s(va_arg(v_list, char *), flags);
			if (str[i] == 'd' || str[i] == 'i')
				ft_putstr(ft_itoa(va_arg(v_list, int)));
			if (str[i] == 'u')
				ft_putstr(ft_uitoa(va_arg(v_list, int)));
			if (str[i] == '%')
				ft_putchar('%');
			if (str[i] == 'p')
				ft_printf_p(va_arg(v_list, unsigned long));
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(v_list);
	return (i);
}

