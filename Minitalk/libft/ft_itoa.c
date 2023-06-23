/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:27:57 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/01 12:27:59 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	fill_res(int size, int offset, int n, char *res)
{
	while (size > offset)
	{
		res[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

static void	check_n(char *res, int *n, int *offset)
{
	if (*n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		*n = 147483648;
		*offset = 2;
	}
	if (*n < 0)
	{
		res[0] = '-';
		*offset = 1;
		*n = -*n;
	}
}

char	*ft_itoa(int n)
{
	int		offset;
	int		size;
	char	*res;

	offset = 0;
	size = get_size(n);
	res = (char *)malloc(sizeof(char) * size + 1);
	if (!res)
		return (NULL);
	check_n(res, &n, &offset);
	fill_res(size, offset, n, res);
	res[size] = '\0';
	return (res);
}
