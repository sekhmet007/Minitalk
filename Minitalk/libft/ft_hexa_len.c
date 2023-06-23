/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:19:16 by ecullier          #+#    #+#             */
/*   Updated: 2023/03/01 11:08:03 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* je met len a un pour ne pas incrementer au 1er tour
 * je divise par le nbr 16 car hexa
 * j incremente ma boucle
 * et je tourne ma len en caractere hexa de nbr
 */
int	ft_hexa_len(unsigned long nbr)
{
	int	len;

	len = (nbr >= 1);
	while (nbr)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}
