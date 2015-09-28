/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 16:10:47 by elivet            #+#    #+#             */
/*   Updated: 2014/01/09 17:48:46 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_init(struct termios *term)
{
	tcgetattr(0, term);
	*ft_get_term() = *term;
	term->c_lflag &= ~(ICANON | ECHO);
	tcsetattr(0, 0, term);
	ft_set();
	term->c_cc[VMIN] = 1;
	term->c_cc[VTIME] = 0;
}
