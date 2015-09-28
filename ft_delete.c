/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 20:36:41 by elivet            #+#    #+#             */
/*   Updated: 2014/01/12 21:45:55 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_delete(t_list *l, char read[4], t_list **cursor_list)
{
	if ((read[0] == 126 || read[0] == 127) && read[1] == 0)
	{
		l->prev->next = l->next;
		l->next->prev = l->prev;
		if ((*cursor_list)->next->content != NULL)
			(*cursor_list) = (*cursor_list)->next;
		else
			(*cursor_list) = (*cursor_list)->next->next;
	}
}
