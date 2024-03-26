# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 11:26:59 by rgreiner          #+#    #+#              #
#    Updated: 2024/03/22 11:09:17 by rgreiner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    =	main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp \
			zombieHorde.cpp \

OBJS    =   ${SRCS:.c=.o}
RM      =   rm -f
CFLAGS  =   -Wall -Wextra -Werror -std=c++98
NAME	= 	zombiehorde

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
.PHONY: all clean fclean re