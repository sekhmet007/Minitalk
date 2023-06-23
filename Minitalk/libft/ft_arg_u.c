/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:15:08 by ecullier          #+#    #+#             */
/*   Updated: 2023/03/01 10:59:43 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* %u est utiliser pour afficher un entier non signe en base 10
donc je cree une fonction pour gerer la conversion en base 10
ft_putunbr  u pour insigned */

static	void	ft_putunbr(unsigned int nbr)
{
	if (nbr < 10)
		ft_putchar_fd(nbr + '0', 1);
	else
	{
		ft_putunbr(nbr / 10);
		ft_putunbr(nbr % 10);
	}
}

int	ft_arg_u(unsigned int nbr)
{
	ft_putunbr(nbr);
	return (ft_dec_len(nbr));
}
