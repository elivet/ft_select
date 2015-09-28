/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 19:49:36 by elivet            #+#    #+#             */
/*   Updated: 2014/01/09 18:20:30 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_enter(t_list **cursor)
{
	t_list		*aff;

	while ((*cursor)->content != NULL)
		*cursor = (*cursor)->prev;
	aff = (*cursor)->next;
	while (aff->content != NULL)
	{
		if (aff->select == 1)
		{
			ft_putstr(aff->content);
			ft_putchar(' ');
		}
		aff = aff->next;
	}
}
