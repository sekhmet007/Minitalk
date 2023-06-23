/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:32:12 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/01 12:32:13 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	
	Vérifier le ft_strdup("") ainsi que le ft_strlen (s + start)
	Le strdup c'est pour renvoyer un nouveau pointeur vide
	le s + start c'est pour malloc la bonne valeur et pas utiliser
	len comme un gros co...
	size < len pour vérifier qu'on alloue le bon nb d'octets si
	ostart + len "dépasse" s
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	size;
	char	*str;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	count = -1;
	while (++count < len)
		str[count] = s[start + count];
	str[count] = '\0';
	return (str);
}
