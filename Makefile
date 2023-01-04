NAME = client

SRCS = client.c 

OBJECT = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

$(NAME): $(OBJECT)

		$(CC) -o $(NAME) $(OBJECT) 

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

clean:
		rm -f $(OBJECT)

fclean: clean
		rm -f $(NAME)

re: 	fclean $(NAME)

.PHONY: all clean fclean re bonus 