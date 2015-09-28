/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_down.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 15:19:46 by elivet            #+#    #+#             */
/*   Updated: 2014/01/06 15:21:18 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_down(t_list **cursor, char buffer[4])
{
	if (buffer[0] == 27 && buffer[1] == 91 && buffer[2] == 66)
	{
		if ((*cursor)->next->content == NULL)
			*cursor = (*cursor)->next->next;
		else
			*cursor = (*cursor)->next;
	}
}
