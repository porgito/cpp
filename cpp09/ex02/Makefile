# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 17:41:33 by jlaurent          #+#    #+#              #
#    Updated: 2023/03/14 17:41:33 by jlaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp PmergeMe.cpp

OBJS	=	${SRCS:.cpp=.o}

FLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	PmergeMe

${NAME}:	${OBJS}
				c++ ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
				rm -rf ${OBJS}

fclean:		clean
				rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re