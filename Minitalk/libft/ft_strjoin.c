/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:30:56 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/01 12:30:58 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const*s1, char const*s2)
{
	char	*sjoin;
	size_t	size1;
	size_t	size2;
	size_t	i;
	size_t	j;

	size1 = 0;
	size2 = 0;
	if (!s1 && !s2)
		return (0);
	if (s1)
		size1 = ft_strlen(s1);
	if (s2)
		size2 = ft_strlen(s2);
	sjoin = malloc((size1 + size2 + 1) * sizeof(char));
	if (!sjoin)
		return (0);
	i = -1;
	while (++i < size1)
		sjoin[i] = s1[i];
	j = -1;
	while (++j < size2)
		sjoin[i + j] = s2[j];
	sjoin[i + j] = '\0';
	return (sjoin);
}
