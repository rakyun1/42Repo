#!/bin/sh

# -c = 컴파일만 진행하고 링크는 하지 않음
# 링크란 컴파일 전에 오브젝트 파일을 가지고 실행파일을 만드는 것을 의미함
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# ar = 아카이브를 생성하고 수정하며 내용을 열람할 수 있는 도구
# - 아카이브란 여러 파일을 하나의 파일로 묶은 것을 의미하는데, 여러 오브젝트 파일을 하나의 파일로 묶어 두기 위해 사용함

# ar 명령의 옵션
# r = 아카이브에 파일을 추가하거나 교체
# c = 새로운 아카이브를 생성
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# ranlib = 정적 라이브러리 파일에 대한 인덱스를 생성
# - 정적 라이브러리란 여러 개의 오브젝트 파일을 하나의 파일로 묶은 것을 의미 인덱스에는 오브젝트 파일들에 대한 정보를 담고 있음
ranlib libft.a
