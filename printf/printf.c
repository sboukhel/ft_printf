/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukhel <sboukhel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 08:58:45 by sboukhel          #+#    #+#             */
/*   Updated: 2026/10/23 15:45:00 by sboukhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar((char)va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		addr_hex(va_arg(args, void *), &len);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), &len);
	else if (format == 'u')
		ft_putnbr(va_arg(args, unsigned int), &len);
	else if (format == 'x' || format == 'X')
		hexa(va_arg(args, unsigned int), format, &len);
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		return_size;
	va_list	args;

	i = 0;
	return_size = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			return_size += ft_format(args, s[i + 1]);
			i++;
		}
		else
			return_size += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (return_size);
}
