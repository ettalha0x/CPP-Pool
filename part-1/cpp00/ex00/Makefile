NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

%.o:%.cpp
	c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	c++ $^ -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all