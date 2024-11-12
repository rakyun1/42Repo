#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
    // BUFFER_SIZE == 100
    // 1 == 10
    char *result = get_next_line(1);
    printf("%s\n", result);
    result = get_next_line(1);
    printf("%s\n", result);
    result = get_next_line(1);
    printf("%s\n", result);
    result = get_next_line(1);
    printf("%s\n", result);
    // 2 == 1000
    // get_next_line(2);
    // 3 == 200
    // get_next_line(3);
    return 0;
}