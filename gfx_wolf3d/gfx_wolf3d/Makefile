##
## Makefile for fdf2 in /home/ungaro_l/rendu/Igraph/gfx_fdf2
## 
## Made by Luca Ungaro
## Login   <ungaro_l@epitech.net>
## 
## Started on  Thu Dec 17 14:22:58 2015 Luca Ungaro
## Last update Fri Dec 18 11:47:43 2015 Luca Ungaro
##

NAME	= wolf3d

RM	= rm -f

CC	= gcc

CFLAGS	+= -W -Wall -Werror -ansi -pedantic
CFLAGS	+= -Iinclude -I/home/${USER}/.froot/include

LDFLAGS += -L/home/${USER}/.froot/lib/ \
	-llapin \
	-lsfml-audio \
	-lsfml-graphics \
	-lsfml-window \
	-lsfml-system \
	-lstdc++ \
	-ldl \
	-lm
LDFLAGS	+= -Llib/my/ -lmy

LIBPATH	= lib/my/

SRCS	= main.c \

OBJS	= $(SRCS:.c=.o)

all:	lib $(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBPATH)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBPATH)

lib:
	$(MAKE) -C $(LIBPATH) CFLAGS='$(CFLAGS)'

relib:
	$(MAKE) re -C $(LIBPATH) CFLAGS='$(CFLAGS)'

re:	fclean relib all

.PHONY:	all clean fclean re lib relib
