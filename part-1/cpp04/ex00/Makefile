NAME = main
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

%.o:%.cpp
	c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	c++ $^ -o $@

all : $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all