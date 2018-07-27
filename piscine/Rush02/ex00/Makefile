# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/21 13:36:42 by loiberti     #+#   ##    ##    #+#        #
#    Updated: 2018/07/22 16:49:40 by loiberti    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = colle-2

SRC = ./srcs/ft_utilitary.c ./srcs/ft_verif_2.c ./srcs/list.c ./srcs/main.c \
	./srcs/verif_rush.c ./srcs/ft_match.c ./srcs/ft_display.c \
	./srcs/ft_particular_case.c

FLAG = -Wall -Werror -Wextra

OBJ = ./ft_utilitary.o ./ft_verif_2.o ./list.o ./main.o \
	./verif_rush.o ./ft_match.o ./ft_display.o ./ft_particular_case.o

all: $(NAME)

$(NAME): $(OBJ) C0X
	@ gcc -o $(NAME) $(OBJ)

$(OBJ):
	@ gcc -c $(FLAG) $(SRC)

C0X:
	@ gcc -o colle-00 srcs/colle_00.c
	@ gcc -o colle-01 srcs/colle_01.c
	@ gcc -o colle-02 srcs/colle_02.c
	@ gcc -o colle-03 srcs/colle_03.c
	@ gcc -o colle-04 srcs/colle_04.c

clean:
	@ rm -f *.o

fclean: clean
	@ rm -f colle*

re: fclean all
