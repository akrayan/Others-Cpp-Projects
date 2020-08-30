##
## Makefile for Makefile in /home/thenascrazy/tek2/Systeme_Unix/projet/PSU_2016_nmobjdump
## 
## Made by Afou Nacerdine
## Login   <nacerdine.afou@epitech.net>
## 
## Started on  Thu Feb 23 10:27:34 2017 Afou Nacerdine
## Last update Mon Oct  2 18:22:13 2017 TheNasCrazy
##

CC		=	g++

RM		=	rm -f

NAME		=	babel_server

SRCS		=	Common/main.cpp		\
			Common/MySocket.cpp	\
			Unix/UnixSocket.cpp	\

OBJS		=	$(SRCS:.cpp=.o)

CXXFLAGS	=	-std=c++11 -g3 #-W -Wall -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
