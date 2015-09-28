/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 19:22:24 by elivet            #+#    #+#             */
/*   Updated: 2014/01/11 15:03:13 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_set(void)
{
	tputs(tgetstr("vi", NULL), 1, tty_putchar);
	tputs(tgetstr("ti", NULL), 1, tty_putchar);
}

void		ft_underline_set(void)
{
	tputs(tgetstr("so", NULL), 1, tty_putchar);
	tputs(tgetstr("us", NULL), 1, tty_putchar);
}
