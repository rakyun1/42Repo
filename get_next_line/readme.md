get_next_line() 함수를 반복적으로 호출(예: 루프 사용)하면 파일 설명자가 가리키는 텍스트 파일을 한 번에 한 줄씩 읽을 수 있어야 합니다.
- 함수는 읽은 줄을 반환해야 합니다.
읽을 내용이 없거나 오류가 발생하면 NULL을 반환해야 합니다.
- 함수가 파일을 읽을 때와 표준 입력에서 읽을 때 모두 예상대로 작동하는지 확인하세요.
- 반환되는 줄에는 파일 끝에 도달하여 \n 문자로 끝나지 않는 경우를 제외하고는 종료하는 \n 문자가 포함되어야 한다는 점에 유의하세요.
- 헤더 파일 get_next_line.h에는 최소한 get_next_line() 함수의 프로토타입이 포함되어야 합니다.
- get_next_line_utils.c 파일에 필요한 모든 헬퍼 함수를 추가합니다.

 get_next_line()에서 파일을 읽어야 하므로 컴파일러 호출에 이 옵션을 추가하세요:
 -D BUFFER_SIZE=n
이 옵션은 read()의 버퍼 크기를 정의합니다.
버퍼 크기 값은 코드를 테스트하기 위해 동료 평가자와 물루넷에 의해 수정됩니다.
이 프로젝트는 일반적인 플래그 외에 -D BUFFER_SIZE 플래그를 포함하거나 포함하지 않고 컴파일할 수 있어야 합니다. 원하는 기본값을 선택할 수 있습니다.
- 다음과 같이 코드를 컴파일합니다(예시에서는 버퍼 크기 42를 사용했습니다):
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
- 파일 설명자가 가리키는 파일이 마지막 호출 이후 변경되었지만 read()가 파일 끝에 도달하지 않은 경우 get_next_line()에 정의되지 않은 동작이 있는 것으로 간주합니다.
- 또한 바이너리 파일을 읽을 때 get_next_line()의 동작이 정의되지 않은 것으로 간주합니다. 그러나 원하는 경우 이 동작을 처리하는 논리적 방법을 구현할 수 있습니다.
BUFFER_SIZE 값이 9999인 경우에도 함수가 계속 작동하나요? 1이면? 10000000? 이유를 아시나요?
get_next_line()이 호출될 때마다 가능한 한 적게 읽어보세요. 새로운 줄이 나오면 현재 줄을 반환해야 합니다.
파일 전체를 읽은 다음 각 줄을 처리하지 마세요.

금지 
- 이 프로젝트에서는 libft를 사용할 수 없습니다.
- lseek()은 금지되어 있습니다.
- 전역 변수는 금지되어 있습니다.


======================================================================================


Repeated calls (e.g., using a loop) to your get_next_line() function should let you read the text file pointed to by the file descriptor, one line at a time.
• Your function should return the line that was read.
If there is nothing else to read or if an error occurred, it should return NULL.
• Make sure that your function works as expected both when reading a file and when reading from the standard input.
• Please note that the returned line should include the terminating \n character, except if the end of file was reached and does not end with a \n character.
• Your header file get_next_line.h must at least contain the prototype of the get_next_line() function.
• Add all the helper functions you need in the get_next_line_utils.c file.

 Because you will have to read files in get_next_line(), add this option to your compiler call:
 -D BUFFER_SIZE=n
It will define the buffer size for read().
The buffer size value will be modified by your peer-evaluators and the Moulinette in order to test your code.
We must be able to compile this project with and without the -D BUFFER_SIZE flag in addition to the usual flags. You can choose the default value of your choice.
• You will compile your code as follows (a buffer size of 42 is used as an example):
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
• We consider that get_next_line() has an undefined behavior if the file pointed to by the file descriptor changed since the last call whereas read() didn’t reach the end of file.
• We also consider that get_next_line() has an undefined behavior when reading a binary file. However, you can implement a logical way to handle this behavior if you want to.
Does your function still work if the BUFFER_SIZE value is 9999? If it is 1? 10000000? Do you know why?
Try to read as little as possible each time get_next_line() is called. If you encounter a new line, you have to return the current line.
Don’t read the whole file and then process each line.

Forbidden 
• You are not allowed to use your libft in this project.
• lseek() is forbidden.
• Global variables are forbidden.