# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/03 12:37:19 by alamorth          #+#    #+#              #
#    Updated: 2019/12/03 12:49:58 by alamorth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRC		=	libft/ft_putchar.c \
			libft/ft_putchar_fd.c \
			libft/ft_putstr.c \
			libft/ft_putstr_fd.c \
			libft/ft_putendl.c \
			libft/ft_putendl_fd.c \
			libft/ft_putnbr.c \
			libft/ft_putnbr_fd.c \
			libft/ft_putnbr_base.c \
			libft/ft_bzero.c \
			libft/ft_memset.c \
			libft/ft_memcpy.c \
			libft/ft_memccpy.c \
			libft/ft_memmove.c \
			libft/ft_memchr.c \
			libft/ft_memcmp.c \
			libft/ft_memalloc.c \
			libft/ft_memdel.c \
			libft/ft_calloc.c \
			libft/ft_strlen.c \
			libft/ft_strnew.c \
			libft/ft_strdup.c \
			libft/ft_strndup.c \
			libft/ft_substr.c \
			libft/ft_strstr.c \
			libft/ft_strnstr.c \
			libft/ft_strchr.c \
			libft/ft_strrchr.c \
			libft/ft_strcmp.c \
			libft/ft_strncmp.c \
			libft/ft_strequ.c \
			libft/ft_strnequ.c \
			libft/ft_strcpy.c \
			libft/ft_strncpy.c \
			libft/ft_strlcpy.c \
			libft/ft_strcat.c \
			libft/ft_strncat.c \
			libft/ft_strlcat.c \
			libft/ft_strjoin.c \
			libft/ft_strtrim.c \
			libft/ft_strtrim_ws.c \
			libft/ft_strdel.c \
			libft/ft_strclr.c \
			libft/ft_striter.c \
			libft/ft_striteri.c \
			libft/ft_strmap.c \
			libft/ft_strmapi.c \
			libft/ft_split.c \
			libft/ft_nbrlen.c \
			libft/ft_unbrlen.c \
			libft/ft_intmax_ttoa_base_ws.c \
			libft/ft_uintmax_ttoa_base.c \
			libft/ft_min.c \
			libft/ft_max.c \
			libft/ft_swap_int.c \
			libft/ft_isalpha.c \
			libft/ft_isalnum.c \
			libft/ft_isascii.c \
			libft/ft_isdigit.c \
			libft/ft_isprint.c \
			libft/ft_toupper.c \
			libft/ft_tolower.c \
			libft/ft_atoi.c \
			libft/ft_itoa.c \
			srcs/format_parse.c \
			srcs/ft_printf.c \
			srcs/print_cs.c \
			srcs/print_di.c \
			srcs/print_base.c \
			srcs/print_nbr_padding.c \
			srcs/output_utils.c \
			srcs/set_option.c

OBJ 	= 	$(SRC:.c=.o)

FLAGS 	=	-Wall -Wextra -Werror -Iincludes

CLEAR:=$(shell clear)

all: $(NAME) includes/

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

bonus:
	@ar rcs $(NAME) $(OBJ)

clean:
	@/bin/rm -Rf $(OBJ)
	@make clean -C libft

fclean: clean
	@/bin/rm -Rf $(NAME)
	@make fclean -C libft

re: fclean all

%.o: %.c
	@gcc $(FLAGS) -o $@ -c $<
