/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arglist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/03 18:58:30 by elivet            #+#    #+#             */
/*   Updated: 2014/01/06 19:54:19 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

t_list		*ft_arglist(int ac, char ** av)
{
	t_list		*list;
	t_list		*racine;

	list = ft_lstnew(0);
	racine = ft_double_circl();
	while (ac > 1)
	{
		ft_lstaddtail(&racine, av[ac - 1]);
		ac--;
	}
	return (racine);
}
