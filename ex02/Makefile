CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = a.out

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

format:
	clang-format -style="{BasedOnStyle: Microsoft, IndentWidth: 4, UseTab: ForIndentation, TabWidth: 4}" -i $(SRC)

re: fclean all

.PHONY: all clean fclean re