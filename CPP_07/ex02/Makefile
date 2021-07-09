NAME	=	array

SRC		=	main.cpp

FLAGS	=	-Wall -Wextra -Werror

RM		= rm -f

O_FILE		=	$(patsubst %.cpp, %.o, $(SRC))

all: $(NAME)

$(NAME):	$(O_FILE)
			clang++ $(FLAGS) $(O_FILE) -o $(NAME)

$(O_FILE):	%.o: %.cpp
			clang++ $(FLAGS) -c $< -o $@

clean:
		${RM} ${O_FILE}

fclean:	clean
		${RM} ${NAME}
re:		fclean all

.PHONY:		re all clean fclean