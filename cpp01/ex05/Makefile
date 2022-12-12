# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 13:23:18 by jlaurent          #+#    #+#              #
#    Updated: 2022/11/30 13:30:23 by jlaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp harl.cpp

OBJS	=	${SRCS:.cpp=.o}

FLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	harl

${NAME}:	${OBJS}
						c++ ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
						rm -rf ${OBJS}

fclean:		clean
						rm -rf ${OBJS} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re