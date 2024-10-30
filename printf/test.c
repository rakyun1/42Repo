#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>
#include "ft_printf.h"

int	main(void)
{
	printf("\ntest    d ========================\n");
	printf("original :: %d\n", -1);
	ft_printf("test     :: %d\n", -1);

	printf("original :: %d\n", -2147483647);
	ft_printf("test     :: %d\n", -2147483647);

	printf("\ntest    s ========================\n");
	printf("original :: %s\n", "hello");
	ft_printf("test     :: %s\n", "hello");

	printf("original :: %s\n", "world");
	ft_printf("test     :: %s\n", "world");

	printf("\ntest    c ========================\n");
	printf("original :: %c\n", 'w');
	ft_printf("test     :: %c\n", 'w');
	printf("original :: %c\n", '\0');
	ft_printf("test     :: %c\n", '\0');

	printf("\ntest    u ========================\n");
	printf("original :: %u\n", -214747);
	ft_printf("test     :: %u\n", -214747);


	ft_printf("\ntest    x========================\n");
	int temp = -2147483648;
	printf("original :: %x\n", temp);
	ft_printf("test     :: %x\n", temp);
	printf("original :: %x\n", 2144112);
	ft_printf("test     :: %x\n", 2144112);

	ft_printf("\ntest    X========================\n");
	printf("original :: %X\n", temp);
	ft_printf("test     :: %X\n", temp);
	printf("original :: %X\n", 2144112);
	ft_printf("test     :: %X\n", 2144112);




	ft_printf("\ntest    %%========================\n");
	printf("original :: %%\n");
	ft_printf("test     :: %%\n");

//	char *s1;
//	char *s2;
//	printf("%p\n", s1);
//	printf("%p\n", s2);


	return 0;
}