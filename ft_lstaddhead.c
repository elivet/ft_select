/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddhead.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/03 18:51:15 by elivet            #+#    #+#             */
/*   Updated: 2014/01/03 18:55:05 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_lstaddhead(t_list **elem, char *content)
{
	t_list		*new;

	new = malloc(sizeof(t_list));
	if (new != NULL)
	{
		new->content = content;
		new->prev = (*elem)->next;
		new->next = *elem;
		(*elem)->prev->next = new;
		(*elem)->prev = new;
	}
}
