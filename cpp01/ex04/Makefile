# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 11:26:59 by rgreiner          #+#    #+#              #
#    Updated: 2024/03/26 17:16:09 by rgreiner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    =	main.cpp \
			outfile.cpp \

OBJS    =   ${SRCS:.c=.o}
RM      =   rm -f
CFLAGS  =   -Wall -Wextra -Werror -std=c++98
NAME	= 	a.out

.c.o:
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