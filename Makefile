NAME = printf_output

SRCS = main.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -g -c $(SRCS)
	gcc -Wall -Werror -Wextra -g -o $(NAME) $(OBJS) -L./ -lft

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
