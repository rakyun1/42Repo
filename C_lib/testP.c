#include<stdio.h>
#include<ctype.h>
#include "libft.h"
#include<string.h>
#include<strings.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <string.h>


void print_list(t_list *list) {
    while (list) {
        printf("%d -> ", *(int *)list->content);
        list = list->next;
    }
    printf("NULL\n");
}

// 노드의 내용을 삭제하는 함수
void delete_content(void *content) {
    free(content);
}

void *double_value(void *content)
{
    int *result = malloc(sizeof(int));
    if (result)
        *result = (*(int *)content) * 2;
    return result;
}

int     check_arrs(char **arr, char **ans)
{
        int     i;

        i = 0;
        while (arr[i] != NULL)
        {
                if (strcmp(arr[i], ans[i]) != 0)
                        return (0);
                i++;
        }
        if (arr[i] != ans[i])
                return (0);
        return (1);
}
void change_to_uppercase(unsigned int i, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

char add_index(unsigned int index, char c)
{
    return c + index;  // 인덱스를 ASCII 값에 더함
}

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



//	ft_strlcat
	printf("\n\n<<< TEST RESULT (ft_strlcat) >>>\n");
	char	dst_cat[20];
	dst_cat[0] = 'H';
	dst_cat[1] = 'e';
	dst_cat[2] = 'l';
	dst_cat[3] = 'l';
	dst_cat[4] = 'o';
	dst_cat[5] = '\0';
	const char	src_cat[] = ", world!";
	printf("\n\nTEST :: Common behavior\n");
	printf("dst total size :: %ld, dst :: Hello, src :: %s, return :: %ld, result :: %s\n", sizeof(dst_cat), src_cat, ft_strlcat(dst_cat, src_cat, sizeof(dst_cat)), dst_cat);

	
	printf("\n\nTEST :: dst is already full\n");
	char	dst_cat2[] = "Full";
	printf("dst size :: %ld, src :: %s, return :: %ld, result :: %s\n", sizeof(dst_cat2), src_cat, ft_strlcat(dst_cat2, src_cat, 0), dst_cat2);


	char dst_cat3[8];
	dst_cat3[0] = 'H'; 
	dst_cat3[1] = 'e'; 
	dst_cat3[2] = 'l'; 
	dst_cat3[3] = 'l'; 
	dst_cat3[4] = 'o'; 
	dst_cat3[5] = '\0'; 
	printf("\n\nTEST :: insufficient length of dst\n");
	printf("dst total size :: %ld, dst :: Hello, src :: , world!, return :: %ld, result :: %s\n", sizeof(dst_cat3), ft_strlcat(dst_cat3, src_cat, sizeof(dst_cat3)), dst_cat3);


//	ft_toupper
	printf("\n\n<<< TEST RESULT (ft_toupper) >>>\n");
	printf("input :: a, output :: %c\n\n", ft_toupper('a'));
	printf("input :: z, output :: %c\n\n", ft_toupper('z'));
	printf("input :: B, output :: %c\n\n", ft_toupper('B'));
	printf("input :: 10, output :: %c\n\n", ft_toupper(10));

//	ft_tolower
	printf("\n\n<<< TEST RESULT (ft_tolower) >>>\n");
	printf("input :: a, output :: %c\n\n", ft_tolower('a'));
	printf("input :: z, output :: %c\n\n", ft_tolower('z'));
	printf("input :: B, output :: %c\n\n", ft_tolower('B'));
	printf("input :: 10, output :: %c\n\n", ft_tolower(10));


//	ft_strchr
	printf("\n\n<<< TEST RESULT (ft_strchr) >>>\n");
	char src_chr[] = "Hello, world!";
	printf("\n\nTEST :: Common behavior\n");
	printf("src :: <%s>, char :: <,> result :: <%s>\n\n", src_chr, ft_strchr(src_chr, ','));
	printf("src :: <%s>, char :: < > result :: <%s>\n\n", src_chr, ft_strchr(src_chr, ' '));
	printf("src :: <%s>, char :: <Z> result :: <%s>\n\n", src_chr, ft_strchr(src_chr, 'Z'));
	printf("src :: <%s>, char :: <E> result :: <%s>\n\n", src_chr, ft_strchr(src_chr, 'E'));
	printf("src :: <%s>, char :: <!> result :: <%s>\n\n", src_chr, ft_strchr(src_chr, '!'));
	printf("src :: <%s>, char :: <H> result :: <%s>\n\n", src_chr, ft_strchr(src_chr, 'H'));
	printf("src :: <%s>, char :: <'null'> result :: <%s>\n\n", "", ft_strchr("", '\0'));
	printf("src :: <%s>, char :: <'null'> result :: <%s>\n\n", "", strchr("", '\0'));

	printf("\nTEST :: When the char is null\n");
	printf("src :: <%s>, char :: <NULL> result :: <%s>\n\n", src_chr, ft_strchr(src_chr, '\0'));

	
//	ft_strncmp
	printf("\n\n<<< TEST RESULT (ft_strncmp) >>>\n\n");
	char src_cmp[] = "Hello, world!";
	char src_cmp2[] = "Hello, computer!";
	printf("src1 :: <%s>, src2 :: <%s>, n :: %d, result :: <%d>\n\n", src_cmp, src_cmp2, 6, ft_strncmp(src_cmp, src_cmp2, 6));
	printf("src1 :: <%s>, src2 :: <%s>, n :: %d, result :: <%d>\n\n", src_cmp, src_cmp2, 7, ft_strncmp(src_cmp, src_cmp2, 7));
	printf("src1 :: <%s>, src2 :: <%s>, n :: %d, result :: <%d>\n\n", src_cmp, src_cmp2, 0, ft_strncmp(src_cmp, src_cmp2, 0));
	char src_cmp3[5];
	printf("src1 :: <%s>, src2 :: <%s>, n :: %d, result :: <%d>\n\n", src_cmp, src_cmp3, 5, ft_strncmp(src_cmp, src_cmp3, 5));
	src_cmp3[0] = 'H';
	src_cmp3[1] = 'e';
	src_cmp3[2] = 'l';
	src_cmp3[3] = 'l';
	printf("src1 :: <%s>, src2 :: <%s>, n :: %d, result :: <%d>\n\n", src_cmp, src_cmp3, 8, ft_strncmp(src_cmp, src_cmp3, 8));


//	ft_memchr
	printf("\n\n<<< TEST RESULT (ft_memchr) >>>\n\n");
	char src_memchr[] = "Hello, world!";
	printf("\n==== original ====\n");
	printf("src :: <%s>, char :: w, n :: %d, result :: <%s>\n\n", src_memchr, 10, (char *)memchr(src_memchr, 'w', 10));

	printf("\n==== custom ====\n");
	printf("src :: <%s>, char :: w, n :: %d, result :: <%s>\n\n", src_memchr, 10, (char *)ft_memchr(src_memchr, 'w', 10));
	printf("\n======================\n");
	

	printf("\n==== original ====\n");
	printf("src :: <%s>, char :: E, n :: %d, result :: <%s>\n\n", src_memchr, 10, (char *)memchr(src_memchr, 'E', 10));

	printf("\n==== custom ====\n");
	printf("src :: <%s>, char :: E, n :: %d, result :: <%s>\n\n", src_memchr, 10, (char *)ft_memchr(src_memchr, 'E', 10));
	printf("\n======================\n");

	printf("\n==== original ====\n");
	printf("src :: <%s>, char :: null, n :: %d, result :: <%s>\n\n", src_memchr, 10, (char *)memchr(src_memchr, '\0', 10));

	printf("\n==== custom ====\n");
	printf("src :: <%s>, char :: null, n :: %d, result :: <%s>\n\n", src_memchr, 10, (char *)ft_memchr(src_memchr, '\0', 10));
	printf("\n======================\n");

	printf("\n==== original ====\n");
	printf("src :: <%s>, char :: H, n :: %d, result :: <%s>\n\n", src_memchr, 10, (char *)memchr(src_memchr, 'H', 10));


	printf("\n==== custom ====\n");
	printf("src :: <%s>, char :: H, n :: %d, result :: <%s>\n\n", src_memchr, 10, (char *)ft_memchr(src_memchr, 'H', 10));
	printf("\n======================\n");



	printf("\n==== original ====\n");
	printf("src :: <%s>, char :: !, n :: %d, result :: <%s>\n\n", src_memchr, 30, (char *)memchr(src_memchr, '!', 30));

	printf("\n==== custom ====\n");
	printf("src :: <%s>, char :: !, n :: %d, result :: <%s>\n\n", src_memchr, 30, (char *)ft_memchr(src_memchr, '!', 30));
	printf("\n======================\n");


	char src_memchr2[] = "Hello, Hello, Hello";
	printf("\n==== original ====\n");
	printf("src :: <%s>, char :: H, n :: %d, result :: <%s>\n\n", src_memchr2, 20, (char *)memchr(src_memchr2, 'H', 20));

	printf("\n==== custom ====\n");
	printf("src :: <%s>, char :: H, n :: %d, result :: <%s>\n\n", src_memchr2, 20, (char *)ft_memchr(src_memchr2, 'H', 20));
	printf("\n======================\n");

	printf("\n==== original ====\n");
	char *temparary = (char *)memchr(src_memchr2, 'H', 0);
	printf("src :: <%s>, char :: H, n :: %d, result :: <%s>\n\n", src_memchr2, 0, temparary ? temparary : "(null)");

	printf("\n==== custom ====\n");
	printf("src :: <%s>, char :: H, n :: %d, result :: <%s>\n\n", src_memchr2, 0, (char *)ft_memchr(src_memchr2, 'H', 0));
	printf("\n======================\n");



//	ft_memcmp
	printf("\n\n<<< TEST RESULT (ft_memcmp) >>>\n\n");

	printf("\n==== original ====\n");
	printf("src1 :: <%s>, src2 :: <%s>, n :: %d, result :: <%d>\n\n", src_cmp, src_cmp2, 6, memcmp(src_cmp, src_cmp2, 6));


	printf("\n==== custom ====\n");
	printf("src1 :: <%s>, src2 :: <%s>, n :: %d, result :: <%d>\n\n", src_cmp, src_cmp2, 6, ft_memcmp(src_cmp, src_cmp2, 6));
	printf("\n======================\n");


	printf("\n==== original ====\n");
	printf("src1 :: <%s>, src2 :: <%s>, n :: %d, result :: <%d>\n\n", src_cmp, src_cmp2, 0, memcmp(src_cmp, src_cmp2, 0));

	printf("\n==== custom ====\n");
	printf("src1 :: <%s>, src2 :: <%s>, n :: %d, result :: <%d>\n\n", src_cmp, src_cmp2, 0, ft_memcmp(src_cmp, src_cmp2, 0));
	printf("\n======================\n");

	printf("\n==== original ====\n");
	printf("src1 :: <%s>, src2 :: <%s>, n :: %d, result :: <%d>\n\n", src_cmp, src_cmp3, 5, memcmp(src_cmp, src_cmp3, 5));
	
	printf("\n==== custom ====\n");
	printf("src1 :: <%s>, src2 :: <%s>, n :: %d, result :: <%d>\n\n", src_cmp, src_cmp3, 5, ft_memcmp(src_cmp, src_cmp3, 5));
	printf("\n======================\n");


	int	src_memcmp[9];
	int	src_memcmp2[9];
	src_memcmp[0] = 2;
	src_memcmp[1] = 4;
	src_memcmp[2] = 5;
	src_memcmp[3] = 7;
	src_memcmp[4] = 8;
	src_memcmp[5] = 2;
	src_memcmp[6] = 7;
	src_memcmp2[0] = 2;
	src_memcmp2[1] = 4;
	src_memcmp2[2] = 5;
	src_memcmp2[3] = 7;
	src_memcmp2[4] = 8;
	src_memcmp2[5] = 3;
	src_memcmp2[6] = 6;
	printf("**src1**\n");
	for (int i = 0 ; i < 7; i++)
	{
		printf("%d ", src_memcmp[i]);
	}
	printf("\n**src2**\n");
	for (int i = 0 ; i < 7; i++)
	{
		printf("%d ", src_memcmp2[i]);
	}
	printf("\n");
	printf("\n==== original ====\n");
	printf("n :: %d, result :: <%d>\n\n", 4, memcmp(src_memcmp, src_memcmp2, 4 * sizeof(int)));
	
	printf("\n==== custom ====\n");
	printf("n :: %d, result :: <%d>\n\n", 4, ft_memcmp(src_memcmp, src_memcmp2, 4 * sizeof(int)));
	printf("\n======================\n");

	printf("\n==== original ====\n");
	printf("n :: %d, result :: <%d>\n\n", 7, memcmp(src_memcmp, src_memcmp2, 7 * sizeof(int)));
	
	printf("\n==== custom ====\n");
	printf("n :: %d, result :: <%d>\n\n", 7, ft_memcmp(src_memcmp, src_memcmp2, 7 * sizeof(int)));
	printf("\n======================\n");




//	ft_strnstr
	printf("\n\n<<< TEST RESULT (ft_strnstr) >>>\n\n");

	char src_big[] = "Hello, world";
	char src_little[] = "";
	printf("\n==== When little is NULL ====\n");
	printf("\n==== original ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", src_big, src_little, 6, strnstr(src_big, src_little, 6));
	printf("\n==== custom ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", src_big, src_little, 6, ft_strnstr(src_big, src_little, 6));
	printf("\n======================\n");


	printf("\n==== When big is NULL ====\n");
	printf("\n==== original ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "", "Hello_world", 6, strnstr("", src_big, 6));
	printf("\n==== custom ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "", "Hello_world", 6, ft_strnstr("", src_big, 6));
	printf("\n======================\n");


	printf("\n==== When n is NULL ====\n");
	printf("\n==== original ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "Hello_world", "Hello", 0, strnstr("Hello_world", "Hello", 0));
	printf("\n==== custom ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "Hello_world", "Hello", 0, ft_strnstr("Hello_world", "Hello", 0));
	printf("\n======================\n");


	printf("\n==== Common behavior ====\n");
	printf("\n==== original ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "Hello_world", "Hello", 5, strnstr("Hello_world", "Hello", 5));
	printf("\n==== custom ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "Hello_world", "Hello", 5, ft_strnstr("Hello_world", "Hello", 5));
	printf("\n======================\n");
	printf("\n==== original ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "Hello_world", "Hello", 5, strnstr("Hello_world", "world", 15));
	printf("\n==== custom ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "Hello_world", "Hello", 15, ft_strnstr("Hello_world", "world", 15));
	printf("\n======================\n");


	printf("\n==== When n is not enough ====\n");
	printf("\n==== original ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "Hello_world", "Hello", 3, strnstr("Hello_world", "Hello", 3));
	printf("\n==== custom ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "Hello_world", "Hello", 3, ft_strnstr("Hello_world", "Hello", 3));
	printf("\n======================\n");
	printf("\n==== original ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "Hello_world", "Hello", 5, strnstr("Hello_world", "world", 5));
	printf("\n==== custom ====\n");
	printf("big :: <%s>, little :: <%s>, n :: %d, result :: <%s>\n", "Hello_world", "Hello", 5, ft_strnstr("Hello_world", "world", 5));
	printf("\n======================\n");


//	ft_atoi
	printf("\n\n<<< TEST RESULT (ft_atoi) >>>\n\n");
	printf("\n==== original ====\n");
	printf("input :: '   +-12345'\nresult :: %d\n\n", atoi("   +-12345"));
	printf("input :: '   +  12345'\nresult :: %d\n\n", atoi("   +  12345"));
	printf("input :: '   +12345'\nresult :: %d\n\n", atoi("   +12345"));
	printf("input :: 'sdaf+12345'\nresult :: %d\n\n", atoi("sdaf+12345"));
	printf("input :: '     12345'\nresult :: %d\n\n", atoi(" \t\n\v\f\r12345"));
	printf("input :: '0'\nresult :: %d\n\n", atoi("0"));
	printf("input :: '+123'\nresult :: %d\n\n", atoi("+123"));
	printf("input :: '123abc'\nresult :: %d\n\n", atoi("123abc"));
	printf("input :: '2147483647'\nresult :: %d\n\n", atoi("2147483647"));
	printf("input :: '2147483648'\nresult :: %d\n\n", atoi("2147483648"));
	printf("\n==== custom ====\n");
	printf("input :: '   +-12345'\nresult :: %d\n\n", ft_atoi("   +-12345"));
	printf("input :: '   +  12345'\nresult :: %d\n\n", ft_atoi("   +  12345"));
	printf("input :: '   +12345'\nresult :: %d\n\n", ft_atoi("   +12345"));
	printf("input :: 'sdaf+12345'\nresult :: %d\n\n", ft_atoi("sdaf+12345"));
	printf("input :: '     12345'\nresult :: %d\n\n", ft_atoi(" \t\n\v\f\r12345"));
	printf("input :: '0'\nresult :: %d\n\n", ft_atoi("0"));
	printf("input :: '+123'\nresult :: %d\n\n", ft_atoi("+123"));
	printf("input :: '123abc'\nresult :: %d\n\n", atoi("123abc"));
	printf("input :: '2147483647'\nresult :: %d\n\n", atoi("2147483647"));
	printf("input :: '2147483648'\nresult :: %d\n\n", atoi("2147483648"));




//	ft_calloc
	printf("\n\n<<< TEST RESULT (ft_calloc) >>>\n\n");
	printf("\n==== original ====\n");
	int	*c = (int *)calloc(10, sizeof(int));
	printf("first input :: 10, second input :: 4\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", c[i]);
	}
	printf("\n");
	char	*c2 = (char *)calloc(10, sizeof(char));
	printf("first input :: 10, second input :: 1\n");
	printf("result :: %s\n", c2);

//	int	*c4 = (int *)calloc(214747836, sizeof(int));
//	printf("first input :: 1231231231232131231, second input :: 4\n");
//	for (int i = 0; i < 12312312; i++) {
//		printf("%d ", c4[i]);
//	}
//	printf("\n");

//	int	*c6 = (int *)calloc(1231231231232131231, sizeof(int));
//	printf("first input :: 1231231231232131231, second input :: 4\n");
//	for (int i = 0; i < 12312312; i++) {
//		printf("%d ", c6[i]);
//	}
//	printf("\n");
	
	printf("\n==== custom ====\n");
	int	*c1 = (int *)ft_calloc(10, sizeof(int));
	printf("first input :: 10, second input :: 4\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", c1[i]);
	}
	printf("\n");
	char	*c3 = (char *)calloc(10, sizeof(char));
	printf("first input :: 10, second input :: 1\n");
	printf("result :: %s\n", c3);

//	int	*c5 = (int *)calloc(214747836, sizeof(int));
//	printf("first input :: 1231231231232131231, second input :: 4\n");
//	for (int i = 0; i < 12312312; i++) {
//		printf("%d ", c5[i]);
//	}
//	printf("\n");

//	int	*c7 = (int *)calloc(1231231231232131231, sizeof(int));
//	printf("first input :: 1231231231232131231, second input :: 4\n");
//	for (int i = 0; i < 12312312; i++) {
//		printf("%d ", c7[i]);
//	}
//	printf("\n");



//	ft_strdup
	printf("\n\n<<< TEST RESULT (ft_strdup) >>>\n\n");
	printf("\n==== original ====\n");
	printf("s : %s, result :: %s\n", "Hello, world!", strdup("Hello, world!"));
	printf("s : %s, result :: %s\n", "", strdup(""));
	printf("s : %s, result :: %s\n", "(null)", strdup("NULL"));
	printf("s : %s, result :: %s\n", "This\nis\ta test! 123", strdup("This\nis\ta test! 123"));
	printf("\n==== custom ====\n");
	printf("s : %s, result :: %s\n", "Hello, world!", ft_strdup("Hello, world!"));
	printf("s : %s, result :: %s\n", "", ft_strdup(""));
	printf("s : %s, result :: %s\n", "(null)", ft_strdup("NULL"));
	printf("s : %s, result :: %s\n", "This\nis\ta test! 123", ft_strdup("This\nis\ta test! 123"));



//	ft_substr
	printf("\n\n<<< TEST RESULT (ft_substr) >>>\n\n");
	printf("s :: %s, start :: %d, len :: %d\nresult :: %s\n\n", "Hello, world!", 7, 14, ft_substr("Hello, world!", 7, 14));
	printf("s :: %s, start :: %d, len :: %d\nresult :: %s\n\n", "Hello, world!", 14, 7, ft_substr("Hello, world!", 14, 7));
	printf("s :: %s, start :: %d, len :: %d\nresult :: %s\n\n", "(null)", 7, 15, ft_substr(NULL, 7, 15));
	printf("s :: %s, start :: %d, len :: %d\nresult :: %s\n\n", "Hello, world!", 0, 4, ft_substr("Hello, world!", 0, 4));
	printf("s :: %s, start :: %d, len :: %d\nresult :: %s\n\n", "Hello, world!", 4, 0, ft_substr("Hello, world!", 4, 0));
	printf("s :: %s, start :: %d, len :: %d\nresult :: %s\n\n", "Hello, world!", 0, 25, ft_substr("Hello, world!", 0, 25));
	

//	ft_strjoin
	printf("\n\n<<< TEST RESULT (ft_strjoin) >>>\n\n");
	printf("s1 :: %s, s2 :: %s, result :: %s\n\n", "Hello, ", "world!", ft_strjoin("Hello, ", "world!"));
	printf("s1 :: %s, s2 :: %s, result :: %s\n\n", "", "Hello, world!", ft_strjoin("", "Hello, world!"));
	printf("s1 :: %s, s2 :: %s, result :: %s\n\n", "(null)", "Hello, world!", ft_strjoin(NULL, "Hello, world!"));


// ft_split
	printf("\n\n<<< TEST RESULT (ft_split) >>>\n\n");
	char    *s = "       show   me   the   money    ";
	char    **ans1 = ((char*[5]){"show", "me", "the", "money", NULL});
	char    **r1 = ft_split(s, ' ');
	if (!check_arrs(r1, ans1))
			printf("==ft_split test 1 fail.==\n");
	else
			printf("  ft_split test 1 Pass.\n");
	char    *s20 = "       show";
	char    **ans2 = ((char*[2]){"show", NULL});
	char    **r2 = ft_split(s20, ' ');
	if (!check_arrs(r2, ans2))
			printf("==ft_split test 2 fail.==\n");
	else
			printf("  ft_split test 2 Pass.\n");
	char    *s30 = "show      ";
	char    **ans3 = ((char*[2]){"show", NULL});
	char    **r3 = ft_split(s30, ' ');
	if (!check_arrs(r3, ans3))
			printf("==ft_split test 3 fail.==\n");
	else
			printf("  ft_split test 3 Pass.\n");
	char    *s40 = "";
	char    **ans4 = ((char*[2]){NULL});
	char    **r4 = ft_split(s40, ' ');
	if (!check_arrs(r4, ans4))
			printf("==ft_split test 4 fail.==\n");
	else
			printf("  ft_split test 4 Pass.\n");


// ft_itoa
	printf("\n\n<<< TEST RESULT (ft_itoa) >>>\n\n");
	printf("input :: -2147483648, result :: %s\n", ft_itoa(-2147483648));
	printf("input :: 0, result :: %s\n", ft_itoa(0));
	printf("input :: -0, result :: %s\n", ft_itoa(-0));
	printf("input :: -2134, result :: %s\n", ft_itoa(-2134));
	printf("input :: 2134, result :: %s\n", ft_itoa(-2134));


// ft_strmapi
	printf("\n\n<<< TEST RESULT (ft_strmapi) >>>\n\n");

    char *str = "hello";
    char *result = ft_strmapi(str, add_index);
	printf("Original string: %s\n", str);
	printf("Transformed string: %s\n\n", result);

	printf("Original string: %s\n", "abc");
	printf("Transformed string: %s\n\n", ft_strmapi("abc", add_index));

	printf("Original string: %s\n", "A1b2");
	printf("Transformed string: %s\n\n", ft_strmapi("A1b2", add_index));

	printf("Original string: %s\n", "");
	printf("Transformed string: %s\n\n", ft_strmapi("", add_index));

	printf("Original string: %s\n", "!@#");
	printf("Transformed string: %s\n\n", ft_strmapi("!@#", add_index));

// ft_strmapi
	printf("\n\n<<< TEST RESULT (ft_strmapi) >>>\n\n");

	char str4[] = "hello";
	printf("Original string: %s\n", str4);
	ft_striteri(str4, change_to_uppercase);
	printf("Transformed string: %s\n\n", str4);

	char str2[] = "IAMRAK";
	printf("Original string: %s\n", str2);
	ft_striteri(str2, change_to_uppercase);
	printf("Transformed string: %s\n\n", str2);

	char str3[] = "\0";
	printf("Original string: %s\n", str3);
	ft_striteri(str3, change_to_uppercase);
	printf("Transformed string: %s\n\n", str3);

// ft_lstadd_back
	printf("\n\n<<< TEST RESULT (ft_lstadd_back) >>>\n\n");
	t_list *e = ft_lstnew((void *)"one");
	t_list *e1 = ft_lstnew((void *)"two");
	t_list *e2 = ft_lstnew((void *)"three");
	t_list *e3 = ft_lstnew((void *)"four");

	e->next = e1;
	e1->next = e2;
	e2->next = e3;
	t_list *e_end = ft_lstnew((void *)"last");	
	ft_lstadd_back(&e, e_end);
	printf("%s\n", (char *)e3->next->content);

// ft_lstmap.c

    t_list *list = malloc(sizeof(t_list));
    int *val1 = malloc(sizeof(int));
    *val1 = 1;
    list->content = val1;

    t_list *second = malloc(sizeof(t_list));
    int *val2 = malloc(sizeof(int));
    *val2 = 2;
    list->next = second;
    second->content = val2;

    t_list *third = malloc(sizeof(t_list));
    int *val3 = malloc(sizeof(int));
    *val3 = 3;
    second->next = third;
    third->content = val3;

    third->next = NULL;

    // 리스트 출력
    printf("Original list: ");
    print_list(list);

    // ft_lstmap 사용
    t_list *new_list = ft_lstmap(list, double_value, delete_content);
    printf("\nNew list after ft_lstmap: ");
    print_list(new_list);


}
