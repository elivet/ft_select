/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selected.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 15:09:54 by elivet            #+#    #+#             */
/*   Updated: 2014/01/11 15:16:17 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void			ft_selected(t_list *cursor, t_list *list)
{
	if (list->select == 1)
		tputs(tgetstr("so", NULL), 1, tty_putchar);
	if (cursor->content == list->content && list->select != 1)
		tputs(tgetstr("us", NULL), 1, tty_putchar);
}
