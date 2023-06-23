/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:29:11 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/01 16:37:43 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La fonction memchr() examine les n premiers octets de la zone mémoire 
// pointée 
// par s à la recherche du caractère c. Le premier octet correspondant à c 
// (interprété comme un unsigned char) arrête l'opération.
// La fonction memrchr() travaille comme memchr(), sauf qu'elle recherche 
// en arrière depuis la fin de la zone de n octets pointée par s 
// plutôt que depuis le début.  

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*search;

	search = (unsigned char *)s;
	while (n--)
	{
		if (*search == (unsigned char)c)
			return (search);
		search++;
	}
	return (NULL);
}
