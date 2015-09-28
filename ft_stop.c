/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 19:19:40 by elivet            #+#    #+#             */
/*   Updated: 2014/01/11 15:01:06 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_stop(void)
{
	tputs(tgetstr("ve", NULL), 1, tty_putchar);
	tputs(tgetstr("te", NULL), 1, tty_putchar);
}

void		ft_sig_stop(void)
{
	tputs(tgetstr("ve", NULL), 1, tty_putchar);
	tputs(tgetstr("te", NULL), 1, tty_putchar);
	tcsetattr(0, 1, ft_get_term());
}

void		ft_underline_stop(void)
{
	tputs(tgetstr("ue", NULL), 1, tty_putchar);
	tputs(tgetstr("se", NULL), 1, tty_putchar);
}
