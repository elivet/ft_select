/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/02 18:30:45 by elivet            #+#    #+#             */
/*   Updated: 2014/01/12 15:53:37 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SELECT_H
# define SELECT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <termcap.h>
# include <termios.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/ioctl.h>
# include <fcntl.h>
# include <signal.h>

typedef struct		s_tool
{
	unsigned int	line;
	unsigned int	word;
}					t_tool;

typedef struct		s_list
{
	char			*content;
	struct s_list	*prev;
	struct s_list	*next;
	int				select;
}					t_list;

int					ft_atoi(const char *str);
t_list				*ft_arglist(int ac, char **av);
t_list				*ft_double_circl(void);
void				ft_lstaddhead(t_list **elem, char *content);
void				ft_lstaddtail(t_list **elem, char *content);
t_list				*ft_lstnew(char *content);
int					tty_putchar(int c);
void				ft_underline(t_list *cursor, t_list **list);
void				ft_delete(t_list *l, char read[4], t_list **cursor_list);
void				ft_up(t_list **cursor, char buffer[4]);
void				ft_down(t_list **cursor, char buffer[4]);
void				ft_space(t_list **cursor, char buffer[4]);
void				ft_command(t_list **l, char buf[4], struct termios *term);
void				ft_enter(t_list **cursor);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s);
void				ft_set(void);
void				ft_stop(void);
void				ft_underline_set(void);
void				ft_sig_stop(void);
void				ft_underline_stop(void);
void				ft_handle_sigtstp(void);
void				ft_handle_sigcont(void);
void				ft_signal_handler(int sig);
struct termios		*ft_get_term(void);
void				ft_init(struct termios *term);
void				ft_check_esc(char buffer[], struct termios *term);
int					ft_word_length(t_list *list, unsigned int y);
size_t				ft_strlen(const char *s);
void				ft_selected(t_list *cursor, t_list *list);
void				ft_sigtstp(char susp[2]);

#endif /* !SELECT_H */
