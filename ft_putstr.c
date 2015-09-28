/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <elivet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:16:14 by elivet            #+#    #+#             */
/*   Updated: 2014/01/09 17:16:02 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void	ft_putstr(char const *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		ft_putchar(s[index]);
		index++;
	}
}

void	ft_putstr_fd(char const *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		write(0, &s[index], 1);
		index++;
	}
}
