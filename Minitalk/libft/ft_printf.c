/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:18:07 by ecullier          #+#    #+#             */
/*   Updated: 2023/03/01 13:53:32 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_arg(va_list arg, char c)
{
	int	bytes;

	bytes = 0;
	if (c == '%')
		bytes += ft_arg_pourcent();
	else if (c == 'c')
		bytes += ft_arg_c(va_arg(arg, int));
	else if (c == 's')
		bytes += ft_arg_s(va_arg(arg, char *));
	else if (c == 'p')
		bytes += ft_arg_p(va_arg(arg, unsigned long));
	else if (c == 'd' || c == 'i')
		bytes += ft_arg_d_i(va_arg(arg, int));
	else if (c == 'u')
		bytes += ft_arg_u(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		bytes += ft_arg_x(va_arg(arg, unsigned long), c);
	return (bytes);
}

int	ft_printf(const char *str, ...)
{
	va_list		arg;
	int			i;
	int			bytes;

	i = 0;
	bytes = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			bytes += ft_arg(arg, str[i]);
		}
		else
			bytes += write(1, &str[i], 1);
		i++;
	}
	va_end(arg);
	return (bytes);
}
