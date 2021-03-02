#include "printf.h"
#include <stdio.h>

int main(void)
{
	char a = 'b';
	char *str = "Coucou";
	int b = -3721;
	unsigned int c = 1231982735;
	void *ptr;

	ft_printf("%c\nHello\n%s\nWorld!\n%d\n%u\n%p\n%%\n", a, str, b, c, ptr);
	printf("%c\nHello\n%s\nWorld!\n%d\n%u\n%p\n%%\n", a, str, b, c, ptr);
	return (0);
}
