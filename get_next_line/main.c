#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
    // BUFFER_SIZE == 100
    // 1 == 10
    // char *result = get_next_line(1);
    // printf("%s\n", result);
    int fd = open("test.txt", O_RDONLY);
	char *result = get_next_line(fd);
    while (result)
    {
        printf("%s\n", result);
	    free(result);
        result = get_next_line(fd);
    }

    // 2 == 1000
    // get_next_line(2);
    // 3 == 200
    // get_next_line(3);
    return 0;
}
