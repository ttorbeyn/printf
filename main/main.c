/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:12:31 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/03/29 17:59:51 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("|%.5p|\n", NULL);
	printf("|%.p|\n", NULL);
	printf("|%p|\n", NULL);
	printf("|%s|\n", NULL);
	printf("|%.5s|\n", NULL);
	printf("|%5s|\n", NULL);
	printf("|%s|\n", NULL);
	printf("|%d|\n", NULL);
}


/*
printf("good: --0*|%-0*.20u|*0 0*|%-0*.10u|*0-- \n", -21, CHAR_MAX, 21, CHAR_MIN);
printf("good: |%-9.10u|\n", UINT_MAX);
printf("good: |%-10.10u|\n", UINT_MAX);
printf("good: |%-11.10u|\n", UINT_MAX);
ft_printf("baad: --0*|%-0*.20u|*0 0*|%-0*.10u|*0-- \n", -21, CHAR_MAX, 21, CHAR_MIN);
ft_printf("baad: |%-9.10u|\n", UINT_MAX);
ft_printf("baad: |%-10.10u|\n", UINT_MAX);
ft_printf("baad: |%-11.10u|\n", UINT_MAX);
char c = '0';
printf("good : c	: |%c|\n", c);
printf("good : 10c	: |%10c|\n", c);
printf("good : -10c	: |%-010c|\n", c);
printf("good : 010c	: |%010c|\n", c);
printf("good : -10c	: |%-10c|\n", c);
printf("good : .10c	: |%.10c|\n", c);
printf("good : .0c	: |%.0c|\n", c);
printf("good : 10.10c	: |%10.10c|\n", c);
printf("good : -10.10c	: |%-10.10c|\n", c);*/
//ft_printf("baad : 1.c	: |%1.c|\n", c);

//int a = 8;
//int b = 0;
//int c = -12;
//ft_printf("baad : X	: |%X|\n", c);
//printf("good : X	: |%X|\n", c);
/*	int		a = -4;
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
	a = 12;
	b = g;*/
//printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
//printf("%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
//printf("good: %-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
//	ft_printf("baad: %-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);

//printf("good: |*%-*.*x*| |*%*.*x*| \n", 4, 5, 10, 10, 21, -10);
//printf(" *%-*.*x* *%*.*x* ", 6, 2, 102, 10, 21, -101);
//	printf(" *%*.*x* *%*.*x* ", -6, 2, 102, 10, 21, 101);
//	printf(" 0*%0-*.*x*0 0*%0*.*x*0 ", 6, 2, 102, 10, 21, -101);
//	printf(" 0*%0-*.*x*0 0*%0*.*x*0 ", 2, 6, 102, 21, 10, -101);
//ft_printf("baad: |*%-*.*x*| |*%*.*x*| \n", 4, 5, 10, 10, 21, -10);
//ft_printf(" *%-*.*x* *%*.*x* ", 6, 2, 102, 10, 21, -101);
//	ft_printf(" *%*.*x* *%*.*x* ", -6, 2, 102, 10, 21, 101);
//	ft_printf(" 0*%0-*.*x*0 0*%0*.*x*0 ", 6, 2, 102, 10, 21, -101);
//	ft_printf(" 0*%0-*.*x*0 0*%0*.*x*0 ", 2, 6, 102, 21, 10, -101);
/*
char *str = "0";
int a = -2;
int b = 1;
ft_printf("baad : 1.s	: |%1.s|\n", str);
ft_printf("baad : 1.1s	: |%1.1s|\n", str);
ft_printf("baad : 1.2s	: |%1.2s|\n", str);
ft_printf("baad : 2.2s	: |%2.2s|\n", str);
ft_printf("baad : .1s	: |%.1s|\n", str);
ft_printf("baad : 3.4s	: |%3.4s|\n", str);
ft_printf("baad : .0s	: |%1.0s|\n", str);
printf("good : 1.s	: |%1.s|\n", str);
printf("good : 1.1s	: |%1.1s|\n", str);
printf("good : 1.2s	: |%1.2s|\n", str);
printf("good : 2.2s	: |%2.2s|\n", str);
printf("good : .1s	: |%.1s|\n", str);
printf("good : 3.4s	: |%3.4s|\n", str);
printf("good : .0s	: |%1.0s|\n", str);
printf("good1: |%*.5s| |%*.5s| \n", -10, "123", 10, "4567");
printf("good2: |%*.5s| |%*.5s| \n", 10, "123", -10, "4567");
printf("good3: |%*.5s| |%*.5s| \n", -10, "123", -10, "4567");
ft_printf("baad1: |%*.5s| |%*.5s| \n", -10, "123", 10, "4567");
ft_printf("baad2: |%*.5s| |%*.5s| \n", 10, "123", -10, "4567");
ft_printf("baad3: |%*.5s| |%*.5s| \n", -10, "123", -10, "4567");
printf(" |%-3.s| \n", NULL);
printf(" |%-9.1s| \n", NULL);
printf(" |%.*s| \n", -2, NULL);
printf(" |%s| \n", NULL);
ft_printf(" |%-3.s| \n", NULL);
ft_printf(" |%-9.1s| \n", NULL);
ft_printf(" |%.*s| \n", -2, NULL);
ft_printf(" |%s| \n", NULL);
*/

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

	int a = -12345;
	int b = 0;
	int c = -12;
	ft_printf("int	: 12345\n");
	ft_printf(".3d	: |%.3d|\n", a);
	ft_printf(".30d	: |%.30d|\n", a);
	ft_printf("3d	: |%3d|\n", a);
	ft_printf("30d	: |%30d|\n", a);
	ft_printf(".03d	: |%.03d|\n", a);
	ft_printf(".030d	: |%.030d|\n", a);
	ft_printf("03d	: |%03d|\n", a);
	ft_printf("030d	: |%030d|\n", a);
	ft_printf("3d	: |%3d|\n", a);
	ft_printf("30d	: |%30d|\n", a);
	ft_printf(".3d	: |%.3d|\n", a);
	ft_printf(".30d	: |%.30d|\n", a);
	ft_printf(".*d	: |%.*d|\n", 30, a);
	ft_printf("*.*d	: |%*.*d|\n", 4, 3, c);
	ft_printf("4.3d	: |%4.3d|\n", c);
	ft_printf("30.10d	: |%30.10d|\n", a);
	ft_printf("11.10d	: |%11.10d|\n", a);
	ft_printf("12.10d	: |%12.10d|\n", a);
	ft_printf("10.10d	: |%10.10d|\n", a);
	ft_printf(".1d	: |%.1d|\n", b);
	ft_printf("0.0d	: |%0.0d|\n", b);
	ft_printf("10.0d	: |%10.0d|\n", b);
	ft_printf(".0d	: |%.0d|\n", b);
	ft_printf(".1d	: |%.1d|\n", b);
	ft_printf("4d	: |%4d|\n", c);
	ft_printf("0*d	: |%0*d|\n", 4, c);
	ft_printf("030.10d	: |%030.10d|\n", a);
	int a = 93;
	printf("good:05.*d\t: |%05.*d|\n", 1, a);
	ft_printf("baad:05.*d\t: |%05.*d|\n", 1, a);
	printf("good:0*d\t: |%0*d|\n", 5, a);
	ft_printf("baad:0*d\t: |%0*d|\n", 5, a);
	printf("030.10d	: |%030.10d|\n", a);
	ft_printf("030.10d	: |%030.10d|\n", a);
	printf("good:02d\t: |%02d|\n", a);
	ft_printf("baad:02d\t: |%02d|\n", a);
	printf("good:02d\t: |%0*d|\n", 2, a);
	ft_printf("baad:02d\t: |%0*d|\n", 2, a);
	printf("good:.1d\t: |%.*d|\n", 1, a);
	ft_printf("baad:.1d\t: |%.*d|\n", 1, a);

 	char *str = "abcdef";
	ft_printf("string	: abcdef\n");
	ft_printf(".3s	: |%.3s|\n", str);
	ft_printf("4.3s	: |%4.3s|\n", str);
	ft_printf("04.3s	: |%04.3s|\n", str);
	ft_printf(".30s	: |%.30s|\n", str);
	ft_printf("3s	: |%3s|\n", str);
	ft_printf("30s	: |%30s|\n", str);
	ft_printf(".03s	: |%.03s|\n", str);
	ft_printf(".030s	: |%.030s|\n", str);
	ft_printf("03s	: |%03s|\n", str);
	ft_printf("030s	: |%030s|\n", str);
	ft_printf("-03s	: |%-03s|\n", str);
	ft_printf("-030s	: |%-030s|\n", str);
	ft_printf("-3s	: |%-3s|\n", str);
	ft_printf("-30s	: |%-30s|\n", str);
	ft_printf("-.3s	: |%-.3s|\n", str);
	ft_printf("-10.30s	: |%-10.30s|\n", str);
	ft_printf("-.30s	: |%-.30s|\n", str);
	ft_printf("\n");

 */

/*
	printf("or_:int		: 12345\n");
	ft_printf("ft_:int		: 12345\n");

	printf("or_:.3d		: |%.3d|\n", a);
	ft_printf("ft_:.3d		: |%.3d|\n", a);
	printf("or_:.30d	: |%.30d|\n", a);
	ft_printf("ft_:.30d	: |%.30d|\n", a);
	printf("or_:3d		: |%3d|\n", a);
	ft_printf("ft_:3d		: |%3d|\n", a);
	printf("or_:30d		: |%30d|\n", a);
	ft_printf("ft_:30d		: |%30d|\n", a);
	printf("or_:.03d	: |%.03d|\n", a);
	ft_printf("ft_:.03d	: |%.03d|\n", a);
	printf("or_:.030d	: |%.030d|\n", a);
	ft_printf("ft_:.030d	: |%.030d|\n", a);
	printf("or_:03d		: |%03d|\n", a);
	ft_printf("ft_:03d		: |%03d|\n", a);
	printf("or_:030d	: |%030d|\n", a);
	ft_printf("ft_:030d	: |%030d|\n", a);
	printf("or_:-03d	: |%-03d|\n", a);
	ft_printf("ft_:-03d	: |%-03d|\n", a);
	printf("or_:-030d	: |%-030d|\n", a);
	ft_printf("ft_:-030d	: |%-030d|\n", a);
	printf("or_:-3d		: |%-3d|\n", a);
	ft_printf("ft_:-3d		: |%-3d|\n", a);
	printf("or_:-30d	: |%-30d|\n", a);
	ft_printf("ft_:-30d	: |%-30d|\n", a);
	printf("or_:-.3d	: |%-.3d|\n", a);
	ft_printf("ft_:-.3d	: |%-.3d|\n", a);
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
 	printf("or_:.0d		: |%.0d|\n", a);
	ft_printf("ft_:.0d		: |%.0d|\n", a);
	printf("or_:0.d		: |%0.d|\n", a);
	ft_printf("ft_:0.d		: |%0.d|\n", a);
	printf("or_:1.d		: |%1.d|\n", a);
	ft_printf("ft_:1.d		: |%1.d|\n", a);
	printf("or_:-1.0d	: |%-1.0d|\n", b);
	ft_printf("ft_:-1.0d	: |%-1.0d|\n", b);
 */

/*
1c1
<                  0000000000000000000000008,                  0000000000000000000000008,                  0000000000000000000000008,                 40000000000000000294967284,                  00000000000000000fffffff4,                  00000000000000000FFFFFFF4,                  0000000000000000123456789,                  00000000000000000075bcd15,                  00000000000000000075BCD15,                  0000000000000000000000000,                  0000000000000000000000000,                  0000000000000000000000000,                 40000000000000000282621618,                  00000000000000000ff439eb2,                  00000000000000000FF439EB2,                  0000000000000000000000097,                  0000000000000000000000061,                  0000000000000000000000061,                  0000000000000002147483647,                  000000000000000007fffffff,                  000000000000000007FFFFFFF,                 20000000000000000147483648,                  0000000000000000080000000,                  0000000000000000080000000 --- Return : 1054
---
>                  0000000000000000000000008,                  0000000000000000000000008,                  0000000000000000000000008,                  0000000000000004294967284,                  00000000000000000fffffff4,                  00000000000000000FFFFFFF4,                  0000000000000000123456789,                  00000000000000000075bcd15,                  00000000000000000075BCD15,                  0000000000000000000000000,                  0000000000000000000000000,                  0000000000000000000000000,                  0000000000000004282621618,                  00000000000000000ff439eb2,                  00000000000000000FF439EB2,                  0000000000000000000000097,                  0000000000000000000000061,                  0000000000000000000000061,                  0000000000000002147483647,                  000000000000000007fffffff,                  000000000000000007FFFFFFF,                  0000000000000002147483648,                  0000000000000000080000000,                  0000000000000000080000000 --- Return : 1054
 */
