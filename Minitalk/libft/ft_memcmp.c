/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:29:18 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/01 16:38:40 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La fonction memcmp() compare les n premiers octets 
// des zones mémoire s1 et s2. Elle renvoie un entier inférieur, égal, 
// ou supérieur à zéro, si s1 est respectivement inférieure, égale 
// ou supérieur à s2. 

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*sone;
	unsigned char		*stwo;

	if (s1 == s2 || n == 0)
		return (0);
	sone = (unsigned char *)s1;
	stwo = (unsigned char *)s2;
	while (n--)
	{
		if (*sone != *stwo)
			return (*sone - *stwo);
		if (n)
		{
			sone++;
			stwo++;
		}
	}
	return (0);
}
