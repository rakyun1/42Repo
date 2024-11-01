#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>
#include "ft_printf.h"

int	main(void)
{
	printf("\ntest    d ========================\n");
	printf("original :: %d\n", -1);
	ft_printf("test     :: %d\n\n", -1);

	printf("original :: %d\n", -2147483647);
	ft_printf("test     :: %d\n\n", -2147483647);

	printf("\ntest    s ========================\n");
	printf("original :: %s\n", "hello");
	ft_printf("test     :: %s\n\n", "hello");

	printf("original :: %s\n", "world");
	ft_printf("test     :: %s\n\n", "world");

	printf("\ntest    c ========================\n");
	printf("original :: %c\n", 'w');
	ft_printf("test     :: %c\n\n", 'w');
	printf("original :: %c\n", '\0');
	ft_printf("test     :: %c\n\n", '\0');

	printf("\ntest    u ========================\n");
	printf("original :: %u\n", -214747);
	ft_printf("test     :: %u\n\n", -214747);
	int temp = 4294967295; 
	printf("original :: %u\n", temp);
	ft_printf("test     :: %u\n\n", temp);


	ft_printf("\ntest    x========================\n");
	temp = -2147483648;
	printf("original :: %x\n", temp);
	ft_printf("test     :: %x\n\n", temp);
	printf("original :: %x\n", 2144112);
	ft_printf("test     :: %x\n\n", 2144112);

	ft_printf("\ntest    X========================\n");
	printf("original :: %X\n", temp);
	ft_printf("test     :: %X\n\n", temp);
	printf("original :: %X\n", 2144112);
	ft_printf("test     :: %X\n\n", 2144112);

	ft_printf("\ntest    %%========================\n");
	printf("original :: %%\n");
	ft_printf("test     :: %%\n\n");

	ft_printf("\ntest    p========================\n");
	char *s1 = NULL;
	char *s2 = "asd";
	int s3 = 123;
	printf("original :: %p\n", s1);
	ft_printf("test     :: %p\n\n", s1);
	printf("original :: %p\n", s2);
	ft_printf("test     :: %p\n\n", s2);
	printf("original :: %p\n", &s3);
	ft_printf("test     :: %p\n\n", &s3);

	ft_printf("\ntest    return========================\n");
	printf("original :: %d\n", printf("asdsad\n"));
	printf("test :: %d\n\n", ft_printf("asdsad\n"));
	printf("original :: %d\n", printf("asdsad %d%d%dasd\n", 1, 2, 3));
	printf("test :: %d\n\n", ft_printf("asdsad %d%d%dasd\n", 1, 2, 3));
	printf("original :: %d\n", printf("asdsad %d%d%dasd %s\n", 1, 2, 3, "asdasdf"));
	printf("test :: %d\n\n", ft_printf("asdsad %d%d%dasd %s\n", 1, 2, 3, "asdasdf"));
	printf("original :: %d\n", printf("asdsad %pasd %s\n", s1, "asdasdf"));
	printf("test :: %d\n\n", ft_printf("asdsad %pasd %s\n", s1, "asdasdf"));


	char *str123 = NULL;
	printf("original :: NULL %s NULL \n", str123);
	printf("test     :: NULL %s NULL \n", str123);

	return 0;
}