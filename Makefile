# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 15:03:29 by ebeiline          #+#    #+#              #
#    Updated: 2022/01/08 17:29:20 by ebeiline         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror 

NAME		= push_swap

LIBFT		= libft

MAKE		= make

SRC			= pushswap.c radix.c normalize.c delegate_sort.c sort_small.c \
				check_input.c optimize.c pa.c pb.c sa.c sb.c ss.c ra.c rb.c \
				rr.c rra.c rrb.c rrr.c

OBJ			= ${SRC:.c=.o}

INCLUDES	= libft/libft.a

all:		$(NAME)


$(NAME):
		@make -C $(LIBFT)
		$(CC) $(SRC) -o $(NAME) $(CFLAGS) $(INCLUDES)

clean:		
		@make -C libft/ clean
		$(RM) $(OBJ)

fclean:		clean
			/bin/rm -f $(NAME)
			@make -C libft/ fclean

re:			fclean all
