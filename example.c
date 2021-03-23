#include <stdio.h>

int main(void)
{
	char *str = "abcdef";
	printf("string	: abcdef\n");
	printf(".3s	: |%.3s|\n", str);
	printf(".30s	: |%.30s|\n", str);
	printf("3s	: |%3s|\n", str);
	printf("30s	: |%30s|\n", str);
	printf(".03s	: |%.03s|\n", str);
	printf(".030s	: |%.030s|\n", str);
	printf("03s	: |%03s|\n", str);
	printf("030s	: |%030s|\n", str);
	printf("-03s	: |%-03s|\n", str);
	printf("-030s	: |%-030s|\n", str);
	printf("-3s	: |%-3s|\n", str);
	printf("-30s	: |%-30s|\n", str);
	printf("-.3s	: |%-.3s|\n", str);
	printf("-.30s	: |%-.30s|\n", str);
	printf("\n");
	int a = 12345;
	printf("int	: 12345\n");
	printf(".3d	: |%.3d|\n", a);
	printf(".30d	: |%.30d|\n", a);
	printf("3d	: |%3d|\n", a);
	printf("30d	: |%30d|\n", a);
	printf(".03d	: |%.03d|\n", a);
	printf(".030d	: |%.030d|\n", a);
	printf("03d	: |%03d|\n", a);
	printf("030d	: |%030d|\n", a);
	printf("-03d	: |%-03d|\n", a);
	printf("-030d	: |%-030d|\n", a);
	printf("-3d	: |%-3d|\n", a);
	printf("-30d	: |%-30d|\n", a);
	printf("-.3d	: |%-.3d|\n", a);
	printf("-.30d	: |%-.30d|\n", a);
	printf("-.*d	: |%-.*d|\n", 30, a);
	printf("-30.10d	: |%-30.10d|\n", a);
	printf("30.10d	: |%30.10d|\n", a);
	printf("-11.10d	: |%-11.10d|\n", a);
	printf(".10-30d	: |%.10-30d|\n", a);
	printf("-10.10d	: |%-10.10d|\n", a);

}