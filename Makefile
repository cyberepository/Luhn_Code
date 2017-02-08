##
## Makefile for Makefile in /home/florian.berthier/start
## 
## Made by Berthier Florian
## Login   <florian.berthier@epitech.eu>
## 
## Started on  Fri Oct 14 07:53:17 2016 Florian Berthier
## Last update Wed Feb  8 16:19:29 2017 Florian Berthier
##

CC	=	gcc -g

SRC	=	fonction.c	\
		fonction_bis.c	\
		luhn.c		\
		luhn_suite.c

OBJS	=	$(SRC:.c=.o)

RM	=	rm -f

NAME	=	luhn

CFLAGS	=	-g3

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -Rf $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
