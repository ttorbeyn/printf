# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/19 11:56:18 by ttorbeyn          #+#    #+#              #
#    Updated: 2021/03/02 16:20:50 by hubert           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS    	= 	ft_printf.c\
				ft_printf_utils.c\
				ft_uitoa.c\
				ft_itoa.c\
				ft_printf_p.c

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
OBJS		= $(SRCS:.c=.o)
RM			= rm -f
LIBC		= ar rc

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIBC) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all, clean, fclean, re
