# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 15:34:01 by rgreiner          #+#    #+#              #
#    Updated: 2024/05/06 15:34:16 by rgreiner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    =	main.cpp \

OBJS    =   ${SRCS:.c=.o}
RM      =   rm -f
CFLAGS  =   -Wall -Wextra -Werror -std=c++98
NAME	= 	a.out

.cpp.o:
		c++ ${CFLAGS} -c $< -o $@
${NAME}:	${OBJS}
	c++ ${CFLAGS} ${OBJS} -o ${NAME}
all:	${NAME}
clean:
	${RM} ${NAME}
fclean: clean
	${RM} ${NAME}
re:	fclean all
.PHONY: bonus all clean fclean re