#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	/*
	char a = 'b';
	char *str = "Coucou";
	int b = -12;
	unsigned int c = 1231982735;
	void *ptr;
	int i;
	//unsigned long x = str;

	//ft_printf("%c\nHello\n%s\nWorld!\n%d\n%u\n%%\n%*\n", a, str, b, c, 10);
	//printf("%c\nHello\n%s\nWorld!\n%d\n%u\n%%\n%p\n", a, str, b, c, str);

	i = ft_printf("%x\n", b);
	printf("%d\n", i);
	i = printf("%x\n", b);
	printf("%d\n", i);

int x;
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";

	x = ft_printf("%-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d); //T15
	printf("nbr : %d\n", x);
	x = printf("%-0i, %-0d, %.30d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d); //T15
	printf("nbr : %d\n", x);
*/
	int a = 12345;
	//
//	printf("or_:int		: 12345\n");
//	ft_printf("ft_:int		: 12345\n");

//	printf("or_:.3d		: |%.3d|\n", a);
//	ft_printf("ft_:.3d		: |%.3d|\n", a);
	printf("or_:.30d	: |%.30d|\n", a);
	ft_printf("ft_:.30d	: |%.30d|\n", a);
//	printf("or_:3d		: |%3d|\n", a);
//	ft_printf("ft_:3d		: |%3d|\n", a);
	printf("or_:30d		: |%30d|\n", a);
	ft_printf("ft_:30d		: |%30d|\n", a);
//	printf("or_:.03d	: |%.03d|\n", a);
//	ft_printf("ft_:.03d	: |%.03d|\n", a);
	printf("or_:.030d	: |%.030d|\n", a);
	ft_printf("ft_:.030d	: |%.030d|\n", a);
//	printf("or_:03d		: |%03d|\n", a);
//	ft_printf("ft_:03d		: |%03d|\n", a);
	printf("or_:030d	: |%030d|\n", a);
	ft_printf("ft_:030d	: |%030d|\n", a);
//	printf("or_:-03d	: |%-03d|\n", a);
//	ft_printf("ft_:-03d	: |%-03d|\n", a);
	printf("or_:-030d	: |%-030d|\n", a);
	ft_printf("ft_:-030d	: |%-030d|\n", a);
//	printf("or_:-3d		: |%-3d|\n", a);
//	ft_printf("ft_:-3d		: |%-3d|\n", a);
	printf("or_:-30d	: |%-30d|\n", a);
	ft_printf("ft_:-30d	: |%-30d|\n", a);
//	printf("or_:-.3d	: |%-.3d|\n", a);
//	ft_printf("ft_:-.3d	: |%-.3d|\n", a);
	printf("or_:-.30d	: |%-.30d|\n", a);
	ft_printf("ft_:-.30d	: |%-.30d|\n", a);
	printf("or_:-.*d	: |%-.*d|\n", 30, a);
	ft_printf("ft_:-.*d	: |%-.*d|\n", 30, a);
	printf("or_:-30.10d	: |%-30.10d|\n", a);
	ft_printf("ft_:-30.10d	: |%-30.10d|\n", a);
	printf("or_:30.10d	: |%30.10d|\n", a);
	ft_printf("ft_:30.10d	: |%30.10d|\n", a);
	printf("or_:-11.10d	: |%-11.10d|\n", a);
	ft_printf("ft_:-11.10d	: |%-11.10d|\n", a);
	printf("or_:.10-30d	: |%.10-30d|\n", a);
	ft_printf("ft_:.10-30d	: |%.10-30d|\n", a);
	printf("or_:-10.10d	: |%-10.10d|\n", a);
	ft_printf("ft_:-10.10d	: |%-10.10d|\n", a);
	return (0);
}
