#******************************************************************************#
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/18 17:06:45 by bjuarez      #+#   ##    ##    #+#        #
#    Updated: 2018/07/21 10:18:52 by bjuarez     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
#******************************************************************************#

NAME = eval_expr

SRC = srcs/

CFLAG = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) 

$(OBJ):
	gcc -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) 

re: fclean all