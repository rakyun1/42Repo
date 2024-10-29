#include<stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("%d\n", -1);
	ft_printf("%d\n", -1);

	printf("%d\n", -2147483647);
	ft_printf("%d\n", -2147483647);

	printf("%s\n", "hello");
	ft_printf("%s\n", "hello");

	printf("%s\n", "world");
	ft_printf("%s\n", "world");

	printf("%u\n", -214747);



	return 0;
}