#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdebord <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/30 09:56:51 by cdebord           #+#    #+#              #
#    Updated: 2016/01/30 17:27:36 by cdebord          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

#LDFLAGS = -L

#LDLIBS = -lft

#HEADERS = -I includes/

SRC = ft_printf.c search_flag.c src.c src2.c src3.c type_arg.c \
conv_d.c conv_x.c convert_di.c convert_c.c convert_o.c \
convert_p.c convert_s.c convert_u.c convert_x.c ft_putnbr.c \
ft_putstr.c ft_atoi.c ft_strdup.c ft_strsub.c ft_strchr.c \
ft_strlen.c ft_putchar.c ft_itoa.c ft_toupper.c conv_s.c \
ft_putwide.c itoa_base.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : printf.h 
#	@make -C libft/
#	@echo "\033[32mlibft compiled \033[0m"
	@$(CC) -c $(SRC) $(CFLAGS)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32m Compilation SUCCESS \033[0m"

clean :
	@$(RM) $(OBJ)
#	@make clean -C libft/
	@echo "\033[32m Objects deleted \033[0m"

fclean : clean
	@$(RM) $(NAME)
#	@make fclean -C libft/
	@echo "\033[32m All deleted \033[0m"

re : fclean all

