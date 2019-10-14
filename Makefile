SRC = lib/nodes.c \
	  lib/lists.c \
	  lib/callbacks.c

CFLAGS = -I./include -W -Wall
OBJ = $(SRC:.c=.o)

NAME = Linked_Lists

all: $(NAME)

$(NAME): $(OBJ)
		 ar rc liblinkedlists.a lib/*.o

clean:
		rm -rf *.o

fclean: clean
		rm -rf $(NAME)

re: fclean all
