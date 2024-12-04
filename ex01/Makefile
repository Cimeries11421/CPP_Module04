NAME = ex01

CXX = c++

CXXFLAGS = -Wall -Wextra -Iincludes -std=c++98

SRCS = main.cpp \
	   Animal.cpp \
	   WrongAnimal.cpp \
	   WrongCat.cpp \
	   Cat.cpp \
	   Dog.cpp \
	   Brain.cpp

SRC = $(addprefix srcs/, $(SRCS))

OBJS = $(addprefix .build/, $(SRCS:.cpp=.o))

DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

.build/%.o: srcs/%.cpp | .build
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

.build:
	mkdir -p .build

-include $(DEPS)

re: fclean all

clean:
	rm -rf $(OBJS) .build

fclean: clean
	rm -rf $(NAME)

.PHONY: all re fclean clean
