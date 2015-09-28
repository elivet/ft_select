/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 15:12:57 by elivet            #+#    #+#             */
/*   Updated: 2014/01/06 15:19:04 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_up(t_list **cursor, char buffer[4])
{
	if (buffer[0] == 27 && buffer[1] == 91 && buffer[2] == 65)
	{
		if ((*cursor)->prev->content == NULL)
			*cursor = (*cursor)->prev->prev;
		else
			*cursor = (*cursor)->prev;
	}
}
