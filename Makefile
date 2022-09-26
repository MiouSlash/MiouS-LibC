##
## EPITECH PROJECT, 2022
## MiouS-LibC
## File description:
## Makefile
##

SRC	:=	$(shell find sources/ -type f -name "*.c")

OBJ	=	$(SRC:.c=.o)

TESTS := $(shell find tests/ -type f -name "*.c")

NAME	=	libmy.a

MYLIB	=	-L ./libmy.a

OBJ	=	$(SRC:.c=.o)

all:    $(NAME)

$(NAME):	$(OBJ)
	gcc -Werror -Wextra -c -I /includes $(SRC)
	ar rcs libmy.a $(OBJ)
	rm -f ./*.o

clean:
	rm -f $(OBJ)
	rm -f unit_test

fclean:	clean
	rm -f $(NAME)

re:	fclean all

unit_test: $(OBJ)
	gcc -Werror -Wextra -o unit_test $(TESTS) $(MYLIB) --coverage -lcriterion --verbose

tests_run: unit_test
	./unit_test
