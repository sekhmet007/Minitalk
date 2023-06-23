/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:30:23 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/01 12:30:24 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Attention au cas ou c = '\0' et s contient un ou des '\0' au milieu
// Si on ne compare pas des uchar, memory leaks avec unicode (c>255) !

char	*ft_strchr(const char *s, int c)
{
	while (*s && (unsigned char)*s != (unsigned char)c)
		s++;
	if ((unsigned char)*s != (unsigned char)c)
		return (NULL);
	else
		return ((char *)s);
}
