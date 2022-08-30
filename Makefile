##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile *.c libmy
##

SRC	:=	$(shell find sources/print_utils -type f -name "*.c")

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

MYLIB	=	-L ./libmy.a

OBJ	=	$(SRC:.c=.o)

all:    $(NAME)

$(NAME):	$(OBJ)
	gcc -Werror -Wextra -I ./includes $(SRC)
	ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f unit_test

fclean:	clean
	rm -f $(NAME)

re:	fclean all

unit_test: $(SRC_TESTS)
	gcc -Werror -Wextra -o unit_test $(SRC_TESTS) tests/test.c $(MYLIB) --coverage -lcriterion

tests_run: unit_test
	./unit_test
