# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 10:14:36 by ryagoub           #+#    #+#              #
#    Updated: 2024/12/17 18:55:07 by ryagoub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie_array
CPPFILES = main.cpp Zombie.cpp zombieHorde.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
OFILES = $(CPPFILES:.cpp=.o)
CPPC = g++

all: $(NAME)

$(NAME): $(OFILES)
	$(CPPC) $(CFLAGS) $(CPPFILES) -o $(NAME)

%.o: %.cpp
	$(CPPC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
