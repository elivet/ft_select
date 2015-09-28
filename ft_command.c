/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 16:27:28 by elivet            #+#    #+#             */
/*   Updated: 2014/01/12 22:00:16 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

int			check_break(char buffer[], t_list *cursor)
{
	if ((buffer[0] == 27 && buffer[1] == 0) || cursor->content == NULL)
		return (1);
	if (buffer[0] == 10 && buffer[1] == 0)
		return (1);
	return (0);
}

void		ft_command(t_list **l, char buf[4], struct termios *term)
{
	int		ret;
	t_list	*cursor;

	cursor = (*l)->next;
	while (!check_break(buf, cursor))
	{
		buf[0] = 0;
		buf[1] = 0;
		buf[2] = 0;
		tputs(tgetstr("cl", NULL), 1, tty_putchar);
		ft_underline(cursor, l);
		ret = read(0, buf, 3);
		buf[ret] = '\0';
		ft_space(&cursor, buf);
		ft_up(&cursor, buf);
		ft_down(&cursor, buf);
		ft_check_esc(buf, term);
		ft_delete(cursor, buf, &cursor);
	}
}
