/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:51:48 by ecullier          #+#    #+#             */
/*   Updated: 2023/03/01 13:37:58 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//fct pour ecrire un char de la taille de un octet
int	ft_arg_c(char c)
{	
	write(1, &c, 1);
	return (1);
}
