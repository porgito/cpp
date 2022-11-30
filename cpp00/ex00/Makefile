SRCS	=	megaphone.cpp

OBJS	=	${SRCS:.cpp=.o}

FLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	megaphone

${NAME}:	${OBJS}
				g++ ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
				rm -rf ${OBJS}

fclean:		clean
				rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
