CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = replace

SRCS = main.cpp FileReplacer.cpp

HEADERS = FileReplacer.hpp

OBJECTS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

format:
	clang-format -style="{BasedOnStyle: Microsoft, IndentWidth: 4, UseTab: ForIndentation, TabWidth: 4}" -i $(SRCS) $(HEADERS)

re: fclean all

.PHONY: all clean fclean re