/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:30:07 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/01 16:41:23 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs s string to given file descriptor

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	len;

	if (!s)
		return ;
	len = (unsigned int)ft_strlen(s);
	write (fd, s, len);
}
