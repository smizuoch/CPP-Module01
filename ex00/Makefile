NAME = a.out

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

HEADERS = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

format:
	clang-format -style="{BasedOnStyle: Microsoft, IndentWidth: 4, UseTab: ForIndentation, TabWidth: 4}" -i $(SRCS) $(HEADERS)

re: fclean all

.PHONY: all clean fclean re
