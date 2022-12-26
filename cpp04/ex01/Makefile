# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 13:23:18 by jlaurent          #+#    #+#              #
#    Updated: 2022/12/14 23:11:48 by jlaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS	=	${SRCS:.cpp=.o}

FLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	animal

${NAME}:	${OBJS}
						c++ ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
						rm -rf ${OBJS}

fclean:		clean
						rm -rf ${OBJS} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re