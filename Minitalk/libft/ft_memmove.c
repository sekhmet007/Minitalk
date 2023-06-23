/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:29:32 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/01 12:29:34 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The  memmove()  function copies n bytes from memory area src to memory area
    dest.  The memory areas may overlap: copying  takes  place  as  though  the
    bytes  in src are first copied into a temporary array that does not overlap
    src or dest, and the bytes are then copied  from  the  temporary  array  to
    dest.
	Utilisation d'un && pour respecter la fonction d'origine, un || empecherait
	les SEGFAULT
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
