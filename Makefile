# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elivet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/02 18:11:08 by elivet            #+#    #+#              #
#    Updated: 2014/01/12 21:58:42 by elivet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ft_select

FLAGS= -Wall -Wextra -Werror

SRC= main.c ft_lstnew.c ft_lstaddhead.c ft_lstaddtail.c ft_double_circl.c \
	 ft_arglist.c ft_underline.c ft_delete.c ft_up.c ft_down.c ft_space.c \
	 ft_tty_putchar.c ft_command.c ft_enter.c ft_putchar.c ft_putstr.c \
	 ft_stop.c ft_set.c ft_signal_handler.c ft_get_term.c ft_init.c \
	 ft_check_esc.c ft_word_length.c ft_strlen.c ft_selected.c ft_sigtstp.c

OBJ= main.o ft_lstnew.o ft_lstaddhead.o ft_lstaddtail.o ft_double_circl.o \
	 ft_arglist.o ft_underline.o ft_delete.o ft_up.o ft_down.o ft_space.o \
	 ft_tty_putchar.o ft_command.o ft_enter.o ft_putchar.o ft_putstr.o \
	 ft_stop.o ft_set.o ft_signal_handler.o ft_get_term.o ft_init.o \
	 ft_check_esc.o ft_word_length.o ft_strlen.o ft_selected.o ft_sigtstp.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -g
	gcc $(FLAGS) -o $(NAME) $(OBJ) -L /usr/lib -ltermcap

%.o: %.c
	gcc $(FLAGS) -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
