/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:28:20 by ecullier          #+#    #+#             */
/*   Updated: 2023/03/01 16:01:58 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* le %x affiche un nbr entier non signe en base 16 avec des caractere
 * minuscule 
je rajoute ma fonction conv_heXa pour gerer le %X si des carateres
majuscule sont 
present dans la string*/

int	ft_arg_x(unsigned int nbr, char c)
{
	char	*num;
	int		bytes;
	int		i;

	i = 0;
	bytes = 0;
	if (!nbr)
		return (write(1, "0", 1));
	num = malloc((ft_hexa_len(nbr) + 1) * sizeof(char));
	if (!num)
		return (0);
	while (nbr)
	{
		num[i] = ft_arg_conv_hexa(nbr % 16, c);
		nbr /= 16;
		i++;
	}
	num[i] = '\0';
	bytes = ft_print_rev(num);
	ft_free_ptr(&num);
	return (bytes);
}
