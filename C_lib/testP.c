#include<stdio.h>
#include<ctype.h>
#include "libft.h"
#include<string.h>
#include<strings.h>

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

//	printf("\nTEST :: Undifined behavior\n");
//	memset(s1, '1', 40);
//	ft_memset(s2, '1', 40);	
//	printf("original :: %s\n", s1);
//	printf("custom   :: %s\n", s2);


//	ft_bzero
	printf("\n\n<<< TEST RESULT (ft_bzero) >>>\n");
	int s3[20];
	int s4[20];
	printf("\nTEST :: Common behavior\n");
	bzero(s3, sizeof(s3));
	ft_bzero(s4, sizeof(s4));	

	for (int i = 0; i < 20; i++)
		printf("%d ", s3[i]);
	printf("\n");
	for (int i = 0; i < 20; i++)
		printf("%d ", s4[i]);
	printf("\n");

	printf("\nTEST :: Not fully filled\n");
	memset(s3, 130, sizeof(s3));
	ft_memset(s4, 130, sizeof(s4));
	bzero(s3, sizeof(s3) / 2);
	ft_bzero(s4, sizeof(s4) / 2);

	for (int i = 0; i < 20; i++)
		printf("%d ", s3[i]);
	printf("\n");
	for (int i = 0; i < 20; i++)
		printf("%d ", s4[i]);
	printf("\n");


//	ft_memcpy
	printf("\n\n<<< TEST RESULT (ft_memcpy) >>>\n");
	long long src = 9223372036854775807; // long long 타입의 최대값
	long long dest;
	long long dest2;
	printf("\nTEST :: The biggest number of the long long\n");
	memcpy(&dest, &src, sizeof(long long));
	ft_memcpy(&dest2, &src, sizeof(long long));
	printf("original :: %lld\n", dest);
	printf("custom   :: %lld\n", dest2);

	printf("\nTEST :: Common behavior\n");
	char src2[20];	
	char dest3[20];
	char dest4[20];

	memset(src2, 126, sizeof(src2));
	memcpy(dest3, &src2, sizeof(dest3));
	ft_memcpy(dest4, &src2, sizeof(dest4));
	printf("original :: %s\n", dest3);
	printf("custom   :: %s\n", dest4);


	printf("\nTEST :: Common behavior\n");
	int src3[20];	
	int dest5[20];
	int dest6[20];

	for (int i = 0; i < 20; i++) {
	    src3[i] = 126;
	}
	memcpy(dest5, &src3, sizeof(dest5));
	ft_memcpy(dest6, &src3, sizeof(dest6));

	printf("### orginal ###\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", dest5[i]);
	}

	printf("\n### custom ###\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", dest6[i]);
	}
	
	printf("\n\nTEST :: Not fully filled\n");
	int src4[10];	

	for (int i = 0; i < 10; i++) {
		src4[i] = 0;
	}
	memcpy(dest5, &src4, sizeof(dest5));
	ft_memcpy(dest6, &src4, sizeof(dest6));
	printf("### orginal ###\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", dest5[i]);
	}

	printf("\n### custom ###\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", dest6[i]);
	}

	printf("\n\nTEST :: Undifined behavior\n");
	char src5[20];
	memset(src5, 45, sizeof(src5));
	memcpy(dest5, &src5, 100);
	ft_memcpy(dest6, &src5, 100);

	printf("### orginal ###\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", dest5[i]);
	}

	printf("\n### custom ###\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", dest6[i]);
	}
	printf("\n\n");



//	ft_memmove
	printf("\n\n<<< TEST RESULT (ft_memmove) >>>\n");
	long long dst;
	long long dst2;
	printf("\nTEST :: The biggest number of the long long\n");
	memmove(&dst, &src, sizeof(long long));
	ft_memmove(&dst2, &src, sizeof(long long));
	printf("original :: %lld\n", dst);
	printf("custom   :: %lld\n", dst2);

	printf("\nTEST :: Common behavior\n");
	char source2[20];	
	char dst3[20];
	char dst4[20];

	memset(source2, 126, sizeof(src2));
	memmove(dst3, &source2, sizeof(source2));
	ft_memmove(dst4, &source2, sizeof(source2));
	printf("original :: %s\n", dst3);
	dst4[20] = '\0';
	printf("custom   :: %s\n", dst4);


	printf("\nTEST :: Common behavior\n");
	int source3[20];	
	int dst5[20];
	int dst6[20];

	for (int i = 0; i < 20; i++) {
	    source3[i] = 126;
	}
	memmove(dst5, &source3, sizeof(source3));
	ft_memmove(dst6, &source3, sizeof(source3));

	printf("### orginal ###\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", dst5[i]);
	}

	printf("\n### custom ###\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", dst6[i]);
	}
	
	printf("\n\nTEST :: Not fully filled\n");
	int source4[10];	

	for (int i = 0; i < 10; i++) {
		source4[i] = 0;
	}
	memmove(dst5, &source4, sizeof(source4));
	ft_memmove(dst6, &source4, sizeof(source4));
	printf("### orginal ###\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", dst5[i]);
	}

	printf("\n### custom ###\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", dst6[i]);
	}

	printf("\n\nTEST :: Overaping copy\n");
	char source6[20];
	char source7[20];
	int	idx2 = 0;
	for (int i = 65; i < 85; i++)
	{
		source6[idx2] = i;
		source7[idx2++] = i;
	}
	printf("source   :: %s\n", source6);
	memmove(source6, source6 + 2, 4);
	ft_memmove(source7, source7 + 2, 4);

	printf("original :: %s\n", source6);
	printf("custom   :: %s\n\n", source7);

//	ft_strlcpy
	printf("\n\n<<< TEST RESULT (ft_strlcpy) >>>\n");
	char	dst_cpy[20];
	const char	src_cpy[] = "Hello_world";
	printf("\n\nTEST :: Common behavior\n");
	printf("dst size :: %ld, src :: %s, return :: %ld, result :: %s\n", sizeof(dst_cpy), src_cpy, ft_strlcpy(dst_cpy, src_cpy, sizeof(dst_cpy)), dst_cpy);

	
	printf("\n\nTEST :: dst_size is 0\n");
	char	dst_cpy2[10];
	printf("dst size :: %d, src :: %s, return :: %ld, result :: %s\n", 0, src_cpy, ft_strlcpy(dst_cpy2, src_cpy, 0), dst_cpy2);


	printf("\n\nTEST :: When the length of src is longer\n");
	printf("dst size :: %ld, src :: Hello_world, return :: %ld, result :: %s\n", sizeof(dst_cpy2), ft_strlcpy(dst_cpy2, src_cpy, sizeof(dst_cpy2)), dst_cpy2);
}
