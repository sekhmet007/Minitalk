/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:10:46 by ecullier          #+#    #+#             */
/*   Updated: 2023/03/01 15:54:11 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* l arg p est un pointeur. la valeur du pointeur est convertie en un string
 * representant l'& du *
la fct doit return  (la string)
recuperer l adresse du pointeur (Ox = prefixe pour valeur adresse en hexa)
ensuite le nbr de chiff hexa necessaire pour representer la valeur du * /16
on stoke le resultat de  valeur * / 16 dans la var i
enfin on parcours la valeurs du *  tant que i > 0 et on  affiche av ft_print_rev
car en convertissant une & en hexa on commence par la fin donc on inverse la
string pour correctement l afficher
*nbr represente la valeur hexa de l'adresse
bytes le nbr d octet ecrit en sortie
i mon compteur
adresse /= 16 divise pour passer au chiffre suivant
bytes += ft_print_rev(nbr) ecrit la string represente en adresse hexa en odre
inverse
je reourne le nbr d octet ecrit */

int	ft_arg_p(unsigned long adresse)
{
	char	*nbr;
	int		bytes;
	int		i;

	i = 0;
	nbr = 0;
	if (!adresse)
		return (write(1, "(nil)", sizeof(char) * 5));
	bytes = write(1, "0x", sizeof(char) * 2);
	nbr = malloc ((ft_hexa_len(adresse) + 1) * sizeof (char));
	if (!nbr)
		return (0);
	while (adresse)
	{
		nbr[i++] = ft_arg_conv_hexa(adresse % 16, 'x');
		adresse /= 16;
	}
	nbr[i] = '\0';
	bytes += ft_print_rev(nbr);
	ft_free_ptr(&nbr);
	return (bytes);
}
