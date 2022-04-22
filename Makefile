# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/10 22:30:12 by kwoowong          #+#    #+#              #
#    Updated: 2022/04/21 21:21:37 by kwoowong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utils.c ft_printf_utils_extra.c ft_printf_conversion_c_s_p.c ft_printf_conversion_d_i_u_x.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rc $(NAME) $(OBJS)

$(OBJS):
	gcc $(FLAGS) -c $(SRCS)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all
