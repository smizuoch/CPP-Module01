CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = harl

SRCS = main.cpp Harl.cpp

HEADERS = Harl.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

format:
	clang-format -style="{BasedOnStyle: Microsoft, IndentWidth: 4, UseTab: ForIndentation, TabWidth: 4}" -i $(SRCS) $(HEADERS)

re: fclean all

.PHONY: all clean fclean re