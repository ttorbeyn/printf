#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	char a = 'b';
	char *str = "Coucou";
	int b = -3721;
	unsigned int c = 1231982735;
	void *ptr;
	//unsigned long x = str;

	//ft_printf("%c\nHello\n%s\nWorld!\n%d\n%u\n%%\n%*\n", a, str, b, c, 10);
	//printf("%c\nHello\n%s\nWorld!\n%d\n%u\n%%\n%p\n", a, str, b, c, str);

	ft_printf("%-*s\n", 10, str);
	printf("%-*s\n", 10, str);

	return (0);
}
