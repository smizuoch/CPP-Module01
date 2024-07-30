CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = a.out

SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)

fclean: clean

format:
	clang-format -style="{BasedOnStyle: Microsoft, IndentWidth: 4, UseTab: ForIndentation, TabWidth: 4}" -i $(SRC)

re: fclean all

.PHONY: all clean fclean re