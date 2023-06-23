# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 16:39:33 by ecullier          #+#    #+#              #
#    Updated: 2023/05/23 17:59:47 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS = minitalk.h

CLIENT	= client
SERVER	= server

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

CLIENT_SRC	= client.c
SERVER_SRC	= server.c

CLIENT_OBJ	= $(CLIENT_SRC:%.c=%.o)
SERVER_OBJ	= $(SERVER_SRC:%.c=%.o)

%.o: %.c
	@$(CC) $(CFLAGS) -I./libft -c $< -o $@ 

all:	$(SERVER) $(CLIENT) 

$(CLIENT): $(CLIENT_OBJ)
	@echo ✅ "Compile client\n"
	@$(CC) $(CFLAGS) $^ -o $@ -Llibft -lft

$(SERVER): $(SERVER_OBJ)
	@make -s -C ./libft
	@echo ✅ "Compile server\n"
	@$(CC) $(CFLAGS) $^ -o $@ -Llibft -lft

clean:
	@rm -rf $(CLIENT_OBJ)
	@rm -rf $(SERVER_OBJ)
	@make fclean -s -C ./libft

fclean: clean
	@echo ✅ "Clean minitalk\n"
	@rm -f $(CLIENT) $(SERVER) 
	@make fclean -s -C ./libft

re: fclean all

.PHOMY: all clean fclean re
