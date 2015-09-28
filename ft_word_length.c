/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 16:20:21 by elivet            #+#    #+#             */
/*   Updated: 2014/01/10 19:19:53 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

int				ft_word_length(t_list *list, unsigned int y)
{
	unsigned int	i;

	i = 0;
	i = ft_strlen(list->content);
	while (list->content != NULL)
	{
		if (ft_strlen(list->content) > i)
			i = ft_strlen(list->content);
		y--;
		list = list->next;
	}
	return (i + 1);
}
