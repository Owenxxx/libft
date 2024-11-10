CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)
BONUS_SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)


NAME = libft.a
MAIN_EXEC = main

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

bonus: $(BONUS_OBJ)
		ar rcs $(NAME) $(BONUS_OBJ)

main: $(NAME) main.c
		$(CC) main.c -L. -lft -o $(MAIN_EXEC)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ) $(BONUS_OBJ)


fclean: clean
		rm -f $(NAME) $(MAIN_EXEC)

re: fclean all


.PHONY: all clean fclean re bonus main
