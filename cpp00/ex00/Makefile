# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 12:40:08 by jlaurent          #+#    #+#              #
#    Updated: 2022/11/30 12:40:30 by jlaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	megaphone.cpp

OBJS	=	${SRCS:.cpp=.o}

FLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	megaphone

${NAME}:	${OBJS}
				c++ ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
				rm -rf ${OBJS}

fclean:		clean
				rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
