/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddtail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/03 18:55:15 by elivet            #+#    #+#             */
/*   Updated: 2014/01/06 12:26:23 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_lstaddtail(t_list **elem, char *content)
{
	t_list		*new;

	new = malloc(sizeof(t_list));
	if (new != NULL)
	{
		new->content = content;
		new->prev = *elem;
		new->next = (*elem)->next;
		(*elem)->next->prev = new;
		(*elem)->next = new;
	}
}
