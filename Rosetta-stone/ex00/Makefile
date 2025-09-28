# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/27 13:07:34 by aalrousa          #+#    #+#              #
#    Updated: 2025/09/27 14:55:29 by aalrousa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c pr_conv.c test.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all fclean re
