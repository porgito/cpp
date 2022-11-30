# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 02:11:14 by jlaurent          #+#    #+#              #
#    Updated: 2022/11/30 02:11:14 by jlaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Contact.cpp PhoneBook.cpp main.cpp

OBJS	= ${SRCS:.cpp=.o}

FLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	= MyPhoneBook

${NAME}:	${OBJS}
					g++ ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
					rm -rf ${OBJS}

fclean:		clean
					rm -rf ${OBJS} ${NAME}

re:			fclean all

.PHONY:		clean fclean re