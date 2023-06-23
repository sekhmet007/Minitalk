/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:04:15 by ecullier          #+#    #+#             */
/*   Updated: 2023/03/01 10:57:29 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//permet de déterminer la longueur décimale d'un entier long en comptant le nbr
// de chiffres dans l'entier
// //return la valeur de len qui corres un nombre de chiffres de nbr y
//  compris 0 et -
int	ft_dec_len(long nbr)
{
	int	len;

	len = (nbr <= 0);
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
