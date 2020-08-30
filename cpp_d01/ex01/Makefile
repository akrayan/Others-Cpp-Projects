##
## Makefile for Makefile in /home/rayan/Piscine_CPP/cpp_d01/01
## 
## Made by Rayan
## Login   <raihane.akkache@epitech.net>
## 
## Started on  Wed Jan  4 15:49:09 2017 Rayan
## Last update Wed Jan  4 17:04:11 2017 Rayan
##

CC	=	gcc -o

RM	=	rm -rf

NAME	=	menger

SCRS	=	main.c menger.c

OBJS	=	$(SCRS:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror -std=gnu99

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(NAME) $(SCRS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
