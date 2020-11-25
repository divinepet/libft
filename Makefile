SRCS = $(shell find . -name "ft_*.c")
OBJS = ${SRCS:.c=.o}
NAME = libft.a
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

.c.o:
		${CC} ${CFLAGS} -I. -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}

bonus:	all

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

.PHONY:		re all clean fclean bonus
