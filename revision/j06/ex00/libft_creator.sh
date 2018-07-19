#!/bin/sh
# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    libft_creator.sh                                 .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/10 14:29:25 by bjuarez      #+#   ##    ##    #+#        #
#    Updated: 2018/07/10 14:40:05 by bjuarez     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

LIB_NAME="libft.a"

gcc -c *.c
ar -rc $LIB_NAME *.o
ranlib $LIB_NAME
exit 0;