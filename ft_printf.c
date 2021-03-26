#include "ft_printf.h"

void	reset_flags(t_flags *flags)
{
	flags->minus = 0;
	flags->zero = 0;
	flags->point = 0;
	flags->precision = 0;
	flags->width = 0;
	flags->big_x = 0;
}

int		ft_check_flags(int i, const char *str, t_flags *flags, va_list v_list)
{
	while (str[i] != 'c' && str[i] != 's' && str[i] != 'd' && str[i] != 'u' && str[i]
			!= 'i' && str[i] != 'p' && str[i] != 'x' && str[i] != 'X' && str[i] != '%')
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
			if (ft_atoi(&str[i]) > 0)
			{
				flags->width = ft_atoi(&str[i]);
				while (ft_isdigit(str[i]))
					i++;
			}
		}
		if (str[i] == '.')
		{
			flags->point = 1;
			i++;
			if (ft_atoi(&str[i]) > 0)
			{
				flags->precision = ft_atoi(&str[i]);
				while (ft_isdigit(str[i]))
					i++;
			}
			else if (str[i] == '*')
			{
				flags->precision = va_arg(v_list, int);
				if (flags->precision < 0)
				{
					flags->point = 0;
					flags->precision = 1;
				}
				i++;
			}
			else if (ft_atoi(&str[i]) == 0)
			{
				flags->precision = 0;
				while (ft_isdigit(str[i]))
					i++;
			}
			else
				flags->precision = 1;
		}
		if (str[i] == '*')
		{
			flags->width = va_arg(v_list, int);
			if (flags->width < 0)
			{
				flags->width = -flags->width;
				flags->minus = 1;
			}
			i++;
		}
		if (ft_isdigit(str[i]))
		{
			flags->width = ft_atoi(&str[i]);
			while (ft_isdigit(str[i]))
				i++;
		}
	}
	return (i);
}

int		ft_check_specifiers(int i, const char *str, t_flags *flags, va_list v_list)
{
	if (str[i] == 'c')
		ft_printf_c(va_arg(v_list, int), flags);
	else if (str[i] == 's')
		ft_printf_s(va_arg(v_list, char *), flags);
	else if (str[i] == 'd' || str[i] == 'i')
		ft_printf_d(ft_itoa(va_arg(v_list, int)), flags);
	else if (str[i] == 'u')
		ft_printf_d(ft_uitoa(va_arg(v_list, int)), flags);
	else if (str[i] == 'p')
		ft_printf_p(va_arg(v_list, unsigned int), flags);
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

int		ft_printf(const char *str, ...)
{
	int	i;
	va_list	v_list;
	t_flags	flags;

	i = 0;
	//*flags = NULL;
	va_start(v_list, str);
	//flags = malloc(sizeof(t_flags));
	flags.count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			reset_flags(&flags);
			i = (ft_check_flags(i, str, &flags, v_list));
			i = (ft_check_specifiers(i, str, &flags, v_list));
		}
		else
			ft_putchar(str[i], &flags);
		i++;
	}
	va_end(v_list);
	//free(flags);
	return (flags.count);
}

