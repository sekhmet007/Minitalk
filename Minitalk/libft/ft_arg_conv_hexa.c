/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_conv_hexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                 >                              +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:36:25 by ecullier          #+#    #+#             */
/*   Updated: 2023/03/01 15:16:25 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Ce code est une fonction qui convertit un chiffre décimal en chiffre 
 * hexadécimal.
 */

char	ft_arg_conv_hexa(char digit, char type)
{
	int	capitalize;

	capitalize = 0;
	if (type == 'X')
		capitalize = 32;
	if (digit > 9)
	{
		if (digit == 10)
			return ('a' - capitalize);
		if (digit == 11)
			return ('b' - capitalize);
		if (digit == 12)
			return ('c' - capitalize);
		if (digit == 13)
			return ('d' - capitalize);
		if (digit == 14)
			return ('e' - capitalize);
		if (digit == 15)
			return ('f' - capitalize);
	}
	else
		return (digit + '0');
	return (0);
}
