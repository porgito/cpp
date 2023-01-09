# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 13:23:18 by jlaurent          #+#    #+#              #
#    Updated: 2023/01/04 13:55:10 by jlaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Span.cpp

OBJS	=	${SRCS:.cpp=.o}

FLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	span

${NAME}:	${OBJS}
						c++ ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
						rm -rf ${OBJS}

fclean:		clean
						rm -rf ${OBJS} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re