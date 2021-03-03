#include "printf.h"
#include <stdio.h>

int main(void)
{
	char a = 'b';
	char *str = "Coucou";
	int b = -3721;
	unsigned int c = 1231982735;
	void *ptr;

	ft_printf("%c\nHello\n%s\nWorld!\n%d\n%u\n%%\n", a, str, b, c);
	printf("%c\nHello\n%s\nWorld!\n%d\n%u\n%%\n", a, str, b, c);
	return (0);
}
