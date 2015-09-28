/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 22:30:36 by elivet            #+#    #+#             */
/*   Updated: 2014/01/12 15:58:19 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void		ft_signal_handler(int sig)
{
	char	susp[2] =
	{
		ft_get_term()->c_cc[VSUSP], 0
	};

	if (sig == 18 || sig == 17)
		ft_sigtstp(susp);
	else if (sig == SIGCONT)
	{
		susp[0] = 0;
		ft_init(ft_get_term());
		signal(SIGTSTP, ft_signal_handler);
		ioctl(0, TIOCSTI, susp);
	}
	else if (sig == SIGWINCH)
	{
		susp[0] = 0;
		ioctl(0, TIOCSTI, susp);
	}
	else
	{
		ft_sig_stop();
		exit(0);
	}
}
