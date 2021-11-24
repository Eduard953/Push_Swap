# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 15:03:29 by ebeiline          #+#    #+#              #
#    Updated: 2021/11/17 15:22:08 by ebeiline         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -g

RM			= rm -f

NAME		= push_swap
LIB_PATH	= ./libft

LIBRARY		= libft.a

MAKE		= make

SRC			= pushswap.c radix.c normalize.c delegate_sort.c sort_small.c \
				check_input.c optimize.c pa.c pb.c sa.c sb.c ss.c ra.c rb.c \
				rr.c rra.c rrb.c rrr.c

OBJ			= ${SRC:.c=.o}

all:		$(NAME)

$(LIBRARY):
			$(MAKE) -C $(LIB_PATH) bonus

$(NAME):	$(OBJ) $(LIBRARY)
			$(CC) -I $(CFLAGS) -o $(NAME) $(OBJ) -L $(LIB_PATH) -lft

push:		$(OBJ)
			$(CC) -I $ $(CFLAGS) -o $(NAME) $(OBJ) -L $(LIB_PATH) -lft

clean:		
			$(RM) $(OBJ)

fclean:		clean
			cd libft && make fclean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re push $(LIBRARY)