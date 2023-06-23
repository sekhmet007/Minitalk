/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:29:53 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/02 10:35:41 by adrienmori       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs s string to given file descriptor and add \n at the end

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	len;

	if (!s)
		return ;
	len = (unsigned int)ft_strlen(s);
	write (fd, s, len);
	write (fd, "\n", 1);
}
