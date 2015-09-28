/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/02 18:17:06 by elivet            #+#    #+#             */
/*   Updated: 2014/01/11 14:53:23 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

int		main(int ac, char **av)
{
	t_list				*list;
	t_list				*cursor;
	char				buffer[4];
	struct termios		term;
	int					sig;

	sig = 1;
	list = ft_arglist(ac, av);
	cursor = list->next;
	if (tgetent(buffer, getenv("TERM")) < 1)
		return (-1);
	ft_init(&term);
	while (sig <= 31)
		signal(sig++, ft_signal_handler);
	ft_command(&list, buffer, &term);
	ft_stop();
	term.c_lflag |= ICANON;
	term.c_lflag |= ECHO;
	tcsetattr(0, 1, &term);
	ft_enter(&cursor);
	return (0);
}
