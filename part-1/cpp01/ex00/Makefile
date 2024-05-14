NAME = zombie
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
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
