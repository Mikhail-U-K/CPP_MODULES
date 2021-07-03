NAME	=	replace

SRC		=	main.cpp

FLAGS	=	-Wall -Wextra -Werror

OBJS	= ${SRC:.cpp=.o}

RM		= rm -f

all:	${NAME}

.c.o:
		clang++ ${FLAGS} -c $< -o

${NAME}: ${OBJS}
		clang++ ${FLAGS} ${OBJS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}
re:		fclean all

.PHONY:		re all clean fclean