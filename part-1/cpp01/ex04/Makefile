NAME = main
SRCS = main.cpp mysed.cpp
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
	$(RM) $(NAME) outfile

re: fclean all
