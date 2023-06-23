/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:31:12 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/01 12:31:13 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The ft_strlcpy() function copies up to size - 1 characters from the 
NUL-terminated string src to dst, NUL-terminating the result.
The ft_strlcpy() functions return the total length of the string they tried to 
create. For ft_strlcpy() that means the length of src. */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = ft_strlen(src);
	while (src[i] && i < size - 1 && size >= 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size >= 1)
		dst[i] = '\0';
	return (res);
}
