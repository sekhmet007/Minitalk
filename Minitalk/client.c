/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:14:09 by ecullier          #+#    #+#             */
/*   Updated: 2023/05/23 13:53:05 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_received;

void	ft_kill(char c, int pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		g_received = 0;
		if (c & (1 << i))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
		while (g_received != 1)
			usleep(1);
	}
}

void	ft_send_msg(int pid, char *msg)
{
	int	i;

	i = 0;
	if (kill(pid, 0) < 0)
	{
		ft_printf("no msg, partie en vacances avec mon cerveau\n");
		exit(EXIT_FAILURE);
	}
	while (msg[i])
		ft_kill(msg[i++], pid);
	ft_kill(msg[i], pid);
}

void	ft_confirm(int signal)
{
	if (signal == SIGUSR1)
		g_received = 1;
	else
	{
		ft_printf("MESSAGE RECEIVED\n");
		exit(EXIT_SUCCESS);
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3 || !argv[2])
	{
		ft_printf("ecrit un truc LOL\n");
		exit(EXIT_FAILURE);
	}
	signal(SIGUSR1, &ft_confirm);
	signal(SIGUSR2, &ft_confirm);
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
	{
		ft_printf("Pid dans les choux, essai encore\n");
		exit(EXIT_FAILURE);
	}
	ft_send_msg(pid, argv[2]);
}
