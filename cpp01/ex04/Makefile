NAME = program
CPPFILES = main.cpp 
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