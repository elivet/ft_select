/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_underline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 13:16:35 by elivet            #+#    #+#             */
/*   Updated: 2014/01/11 22:53:51 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_underline(t_list *cursor, t_list **list)
{
	t_list			*temp;
	unsigned int	y;
	unsigned int	x;
	struct winsize	size;

	y = 0;
	ioctl(0, TIOCGWINSZ, &size);
	temp = (*list)->next;
	while (temp->content != NULL)
	{
		tputs(tgoto(tgetstr("cm", NULL), x, y), 1, tty_putchar);
		ft_selected(cursor, temp);
		if (cursor->content == temp->content && temp->select == 1)
			ft_underline_set();
		ft_putstr_fd(temp->content);
		temp = temp->next;
		ft_underline_stop();
		y++;
		if (size.ws_row <= y)
		{
			y = 0;
			x = x + ft_word_length(cursor, y);
		}
	}
}
