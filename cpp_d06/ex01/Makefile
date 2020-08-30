##
## Makefile for Makefile in /home/rayan/Piscine_CPP/cpp_d01/01
## 
## Made by Rayan
## Login   <raihane.akkache@epitech.net>
## 
## Started on  Wed Jan  4 15:49:09 2017 Rayan
## Last update Mon Jan  9 17:50:29 2017 Rayan
##

CC	=	g++ -o

RM	=	rm -rf

NAME	=	my_convert_temp

SCRS	=	main.cpp

OBJS	=	$(SCRS:.cpp=.o)

CFLAGS	=	 -Wall -Wextra -Werror -std=c++03

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(NAME) $(SCRS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
