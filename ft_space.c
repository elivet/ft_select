/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 15:23:22 by elivet            #+#    #+#             */
/*   Updated: 2014/01/09 18:04:11 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_space(t_list **cursor, char buffer[4])
{
	if (buffer[0] == 32 && buffer[1] == 0)
	{
		if ((*cursor)->select == 1)
			(*cursor)->select = 0;
		else if ((*cursor)->select == 0)
			(*cursor)->select = 1;
		if ((*cursor)->next->content != NULL)
			*cursor = (*cursor)->next;
		else
			*cursor = (*cursor)->next->next;
	}
}
