#******************************************************************************#
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/18 17:06:45 by bjuarez      #+#   ##    ##    #+#        #
#    Updated: 2018/07/19 17:42:06 by bjuarez     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
#******************************************************************************#

NAME = ft_display_file

SRC = ft_display_file.c

CFLAG = -Wall -Werror -Wextra

INC = -L./includes -lft

OBJ = $(SRC:.c=.o)

all: $(NAME)
	gcc -o $(NAME) $(OBJ) $(INC)

$(NAME):
	gcc $(CFLAG) -c $(SRC) 

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) 

re: fclean all