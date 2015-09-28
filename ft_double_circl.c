/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_circl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/03 18:56:30 by elivet            #+#    #+#             */
/*   Updated: 2014/01/09 13:25:42 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

t_list		*ft_double_circl(void)
{
	t_list	*racine;

	racine = malloc(sizeof(t_list));
	if (racine != NULL)
	{
		racine->select = 0;
		racine->prev = racine;
		racine->next = racine;
	}
	return (racine);
}
