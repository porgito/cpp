# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 13:23:18 by jlaurent          #+#    #+#              #
#    Updated: 2022/12/12 18:33:47 by jlaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Fixed.cpp

OBJS	=	${SRCS:.cpp=.o}

FLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	fixed

${NAME}:	${OBJS}
						c++ ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
						rm -rf ${OBJS}

fclean:		clean
						rm -rf ${OBJS} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re