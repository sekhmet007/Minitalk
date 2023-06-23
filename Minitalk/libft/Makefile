# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 12:32:43 by esuberbi          #+#    #+#              #
#    Updated: 2023/05/23 17:36:13 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ${SRC}

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC			= gcc
RM			= rm -f
AR			= ar rc
RN			= ranlib

CFLAGS		= -Wall -Wextra -Werror

SRC =	ft_strlen.c			\
		ft_isalpha.c		\
		ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memmove.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strnstr.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_atoi.c			\
		ft_calloc.c			\
		ft_strdup.c			\
		ft_split.c			\
		ft_strjoin.c		\
		ft_substr.c			\
		ft_strtrim.c		\
		ft_itoa.c			\
		ft_strmapi.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_striteri.c		\
		ft_realloc.c		\
		ft_printf.c		\
		ft_arg_c.c 		\
		ft_arg_d_i.c 		\
		ft_arg_p.c 		\
		ft_arg_s.c 		\
		ft_free_ptr.c 		\
		ft_arg_u.c 		\
		ft_arg_x.c 		\
		ft_arg_pourcent.c 	\
		ft_arg_conv_hexa.c 	\
		ft_dec_len.c 		\
		ft_hexa_len.c 		\
		ft_print_rev.c 		\
	       	ft_lstnew_bonus.c			\
		ft_lstadd_front_bonus.c	\
		ft_lstsize_bonus.c		\
		ft_lstlast_bonus.c		\
		ft_lstadd_back_bonus.c	\
		ft_lstdelone_bonus.c		\
		ft_lstclear_bonus.c		\
		ft_lstiter_bonus.c		\
		ft_lstmap_bonus.c
				
.c.o:		
			@${CC} ${CFLAGS} -c $< -o $@

all:            $(NAME)

$(NAME):	${OBJS}
			@${AR} ${NAME} ${OBJS}
			@${RN} ${NAME}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} $(NAME)
			@${RM} libft.a

re:			fclean all

.PHONY:		all bonus clean fclean re
