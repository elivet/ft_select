/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 12:10:08 by elivet            #+#    #+#             */
/*   Updated: 2014/01/03 18:41:11 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

t_list			*ft_lstnew(char *content)
{
	t_list		*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	else
	{
		new_list->content = content;
		new_list->next = NULL;
		new_list->prev = NULL;
	}
	return (new_list);
}
