/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:53:12 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/02 10:54:22 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*out;
	size_t	tmp;

	tmp = size * nitems;
	if (nitems == 0 || size == 0)
		return (malloc(0));
	else if (tmp / size != nitems || tmp / nitems != size)
		return (NULL);
	else
	{
		out = malloc(nitems * (size));
		if (!out)
			return (NULL);
		ft_bzero(out, nitems * size);
	}
	return (out);
}
