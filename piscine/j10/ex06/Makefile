#******************************************************************************#
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 16:24:24 by bjuarez      #+#   ##    ##    #+#        #
#    Updated: 2018/07/18 17:24:31 by bjuarez     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
#******************************************************************************#

NAME = do_op

SRC = $(wildcard srcs/*.c)

INCLUDE = $(wildcard includes/*.h)

all: $(NAME)

$(NAME):
	gcc  -Wall -Werror -Wextra $(SRC)
	./$(NAME)

clean:
	rm -f includes/*.gch

fclean: clean
	rm -f $(NAME)

re: fclean all