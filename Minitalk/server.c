/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:12:37 by ecullier          #+#    #+#             */
/*   Updated: 2023/05/23 13:55:28 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	close_server(int sig)
{
	(void)sig;
	ft_printf("\nCiao Bella!\n");
	exit(0);
}

char	*ft_char_addto_str(char *dest, char c)
{
	int	i;

	if (!dest)
		dest = ft_calloc(1, 1);
	i = ft_strlen(dest);
	if (i % 100 == 0)
		dest = ft_realloc(dest, 100);
	dest[i] = c;
	i++;
	dest[i] = '\0';
	return (dest);
}

void	ft_get_msg(int signal, siginfo_t *s, void *ucontext)
{
	static int		i = 0;
	static char		c = 0;
	static char		*str = NULL;

	(void)ucontext;
	if (i < 8)
	{
		c = c | (signal == SIGUSR1) << i;
		if (++i < 8)
			kill(s->si_pid, SIGUSR1);
		if (i < 8)
			return ;
	}
	str = ft_char_addto_str(str, c);
	i = 0;
	if (c == 0)
	{
		kill(s->si_pid, SIGUSR2);
		ft_printf("%s, bytes: %d\n", str, ft_strlen(str));
		free(str);
		str = NULL;
		return ;
	}
	kill(s->si_pid, SIGUSR1);
	c = 0;
}

int	main(void)
{
	struct sigaction	s;

	ft_printf("Bienvenue sur le server d'Elo\n");
	ft_printf("PID: %d\n", getpid());
	s.sa_sigaction = ft_get_msg;
	signal(SIGINT, close_server);
	s.sa_flags = SA_SIGINFO | SA_RESTART;
	sigemptyset(&s.sa_mask);
	while (1)
	{
		sigaction(SIGUSR1, &s, 0);
		sigaction(SIGUSR2, &s, 0);
	}
	return (0);
}
