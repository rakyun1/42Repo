#include<stdio.h>
#include<ctype.h>
#include "libft.h"
#include<string.h>
int	main(void)
{

//	ft_isalpha
	printf("\n\n<<< TEST RESULT (ft_isalpha) >>>\n");
	if (isalpha('c') != ft_isalpha('c'))
	{
		printf("'c' :: error\n");
		printf("original :: %d\n", isalpha('c'));
		printf("custom :: %d\n", ft_isalpha('c'));
	}
	else
		printf("'c' :: correct\n\n");
	if (isalpha('1') != ft_isalpha(1))
	{
		printf("'1' :: error\n");
		printf("original :: %d\n", isalpha('1'));
		printf("custom :: %d\n\n", ft_isalpha('1'));
	}
	else
		printf("'1' :: correct\n\n");

	if (isalpha(48) != ft_isalpha(48))
	{
		printf("48 :: error\n");
		printf("original :: %d\n", isalpha(48));
		printf("custom :: %d\n\n", ft_isalpha(48));
	}
	else
		printf("48 :: correct\n\n");
	if (isalpha(5) != ft_isalpha(5))
	{
		printf("5 :: error\n");
		printf("original :: %d\n", isalpha(5));
		printf("custom :: %d\n\n", ft_isalpha(5));
	}
	else
		printf("5 :: correct\n\n");
	if (isalpha('B') != ft_isalpha('B'))
	{
		printf("'B' :: error\n");
		printf("original :: %d\n", isalpha('B'));
		printf("custom :: %d\n\n", ft_isalpha('B'));
	}
	else
		printf("'B' :: correct\n\n");

//	ft_isdigit
	printf("\n\n<<< TEST RESULT (ft_isdigit) >>>\n");
	if (isdigit('c') != ft_isdigit('c'))
	{
		printf("'c' :: error\n");
		printf("original :: %d\n", isdigit('c'));
		printf("custom :: %d\n\n", ft_isdigit('c'));
	}
	else
		printf("'c' :: correct\n\n");
	if (isdigit('1') != ft_isdigit('1'))
	{
		printf("'1' :: error\n");
		printf("original :: %d\n", isdigit('1'));
		printf("custom :: %d\n\n", ft_isdigit('1'));
	}
	else
		printf("'1' :: correct\n\n");

	if (isdigit(48) != ft_isdigit(48))
	{
		printf("48 :: error\n");
		printf("original :: %d\n", isdigit(48));
		printf("custom :: %d\n\n", ft_isdigit(48));
	}
	else
		printf("48 :: correct\n\n");
	if (isdigit(5) != ft_isdigit(5))
	{
		printf("5 :: error\n");
		printf("original :: %d\n", isdigit(5));
		printf("custom :: %d\n\n", ft_isdigit(5));
	}
	else
		printf("5 :: correct\n\n");
	if (isdigit('B') != ft_isdigit('B'))
	{
		printf("'B' :: error\n");
		printf("original :: %d\n", isdigit('B'));
		printf("custom :: %d\n\n", ft_isdigit('B'));
	}
	else
		printf("'B' :: correct\n\n");


//	ft_isalnum
	printf("\n\n<<< TEST RESULT (ft_isalnum) >>>\n");
	if (isalnum('c') != ft_isalnum('c'))
	{
		printf("'c' :: error\n");
		printf("original :: %d\n", isalnum('c'));
		printf("custom :: %d\n\n", ft_isalnum('c'));
	}
	else
		printf("'c' :: correct\n\n");
	if (isalnum('1') != ft_isalnum('1'))
	{
		printf("'1' :: error\n");
		printf("original :: %d\n", isalnum('1'));
		printf("custom :: %d\n\n", ft_isalnum('1'));
	}
	else
		printf("'1' :: correct\n\n");

	if (isalnum(48) != ft_isalnum(48))
	{
		printf("48 :: error\n");
		printf("original :: %d\n", isalnum(48));
		printf("custom :: %d\n\n", ft_isalnum(48));
	}
	else
		printf("48 :: correct\n\n");
	if (isalnum(5) != ft_isalnum(5))
	{
		printf("5 :: error\n");
		printf("original :: %d\n", isalnum(5));
		printf("custom :: %d\n\n", ft_isalnum(5));
	}
	else
		printf("5 :: correct\n\n");
	if (isalnum('B') != ft_isalnum('B'))
	{
		printf("'B' :: error\n");
		printf("original :: %d\n", isalnum('B'));
		printf("custom :: %d\n\n", ft_isalnum('B'));
	}
	else
		printf("'B' :: correct\n\n");


//	ft_isascii
	printf("\n\n<<< TEST RESULT (ft_isascii) >>>\n");
	if (isascii('c') != ft_isascii('c'))
	{
		printf("'c' :: error\n");
		printf("original :: %d\n", isascii('c'));
		printf("custom :: %d\n\n", ft_isascii('c'));
	}
	else
		printf("'c' :: correct\n\n");
	if (isascii('1') != ft_isascii('1'))
	{
		printf("'1' :: error\n");
		printf("original :: %d\n", isascii('1'));
		printf("custom :: %d\n\n", ft_isascii('1'));
	}
	else
		printf("'1' :: correct\n\n");

	if (isascii(48) != ft_isascii(48))
	{
		printf("48 :: error\n");
		printf("original :: %d\n", isascii(48));
		printf("custom :: %d\n\n", ft_isascii(48));
	}
	else
		printf("48 :: correct\n\n");
	if (isascii(128) != ft_isascii(128))
	{
		printf("128 :: error\n");
		printf("original :: %d\n", isascii(128));
		printf("custom :: %d\n\n", ft_isascii(128));
	}
	else
		printf("128 :: correct\n\n");
	if (isascii(12345) != ft_isascii(12345))
	{
		printf("12345 :: error\n");
		printf("original :: %d\n", isascii(12345));
		printf("custom :: %d\n\n", ft_isascii(12345));
	}
	else
		printf("12345 :: correct\n\n");


//	ft_isprint
	printf("\n\n<<< TEST RESULT (ft_isprint) >>>\n");
	if (isprint('c') != ft_isprint('c'))
	{
		printf("'c' :: error\n");
		printf("original :: %d\n", isprint('c'));
		printf("custom :: %d\n\n", ft_isprint('c'));
	}
	else
		printf("'c' :: correct\n\n");
	if (isprint('1') != ft_isprint('1'))
	{
		printf("'1' :: error\n");
		printf("original :: %d\n", isprint('1'));
		printf("custom :: %d\n\n", ft_isprint('1'));
	}
	else
		printf("'1' :: correct\n\n");

	if (isprint(31) != ft_isprint(31))
	{
		printf("31 :: error\n");
		printf("original :: %d\n", isprint(31));
		printf("custom :: %d\n\n", ft_isprint(31));
	}
	else
		printf("31 :: correct\n\n");
	if (isprint(-1) != ft_isprint(-1))
	{
		printf("-1 :: error\n");
		printf("original :: %d\n", isprint(-1));
		printf("custom :: %d\n\n", ft_isprint(-1));
	}
	else
		printf("-1 :: correct\n\n");
	if (isprint(12345) != ft_isprint(12345))
	{
		printf("12345 :: error\n");
		printf("original :: %d\n", isprint(12345));
		printf("custom :: %d\n\n", ft_isprint(12345));
	}
	else
		printf("12345 :: correct\n\n");


//	ft_strlen
	printf("\n\n<<< TEST RESULT (ft_strlen) >>>\n");
	if (strlen("Hello, world") != ft_strlen("Hello, world"))
	{
		printf("'Hello, world' :: error\n");
		printf("original :: %ld\n", strlen("Hello, world"));
		printf("custom :: %ld\n\n", ft_strlen("Hello, world"));
	}
	else
		printf("'Hello, world' :: correct\n\n");
	if (strlen("1") != ft_strlen("1"))
	{
		printf(" '1' :: error\n");
		printf("original :: %ld\n", strlen("1"));
		printf("custom :: %ld\n\n", ft_strlen("1"));
	}
	else
		printf(" '1' :: correct\n\n");
	if (strlen("") != ft_strlen(""))
	{
		printf(" '' :: error\n");
		printf("original :: %ld\n", strlen(""));
		printf("custom :: %ld\n\n", ft_strlen(""));
	}
	else
		printf(" '' :: correct\n\n");
	if (strlen("\0") != ft_strlen("\0"))
	{
		printf(" 'null' :: error\n");
		printf("original :: %ld\n", strlen("\0"));
		printf("custom :: %ld\n\n", ft_strlen("\0"));
	}
	else
		printf(" 'null' :: correct\n\n");


//	ft_memset
	printf("\n\n<<< TEST RESULT (ft_memset) >>>\n");
	char s1[20];
	char s2[20];
	printf("\nTEST :: Filled 0\n");
	memset(s1, '0', 20);	
	ft_memset(s2, '0', 20);	
	printf("original :: %s\n", s1);
	printf("custom   :: %s\n", s2);

	printf("\nTEST :: Filled A\n");
	memset(s1, 'A', 20);	
	ft_memset(s2, 'A', 20);	
	printf("original :: %s\n", s1);
	printf("custom   :: %s\n", s2);
	
	printf("\nTEST :: Not fully filled\n");
	memset(s1, 'B', 10);	
	ft_memset(s2, 'B', 10);	
	printf("original :: %s\n", s1);
	printf("custom   :: %s\n", s2);

	printf("\nTEST :: Filled ascii num 130\n");
	memset(s1, 130, 20);	
	ft_memset(s2, 130, 20);	
	printf("original :: %s\n", s1);
	printf("custom   :: %s\n", s2);

	printf("\nTEST :: Undifined behavior\n");
	memset(s1, '1', 40);
	ft_memset(s2, '1', 40);	
	printf("original :: %s\n", s1);
	printf("custom   :: %s\n", s2);
}
