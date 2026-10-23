/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukhel <sboukhel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 09:57:24 by sboukhel          #+#    #+#             */
/*   Updated: 2026/10/23 15:01:37 by sboukhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_swap(char s1, char s2)
{
	char	tmp;

	tmp = s1;
	s1 = s2;
	s2 = tmp;
}

char	*fillingbuffer(char *buffer, unsigned long long h, char flag)
{
	int		i;
	char	*hex1;
	char	*hex2;

	i = 0;
	hex1 = "0123456789abcdef";
	hex2 = "0123456789ABCDEF";
	while (h > 0)
	{
		if (flag == 'x')
			buffer[i] = hex1[h % 16];
		if (flag == 'X')
			buffer[i] = hex2[h % 16];
		h = h / 16;
		i++;
	}
	return (buffer);
}

void	hexa(unsigned long long h, char flag, int *len)
{
	int		i;
	char	*buffer;

	buffer = calloc(20, sizeof(char));
	if (*len == -1)
		return ;
	if (h == 0)
	{
		ft_putchar('0');
		*len = 1;
		return ;
	}
	fillingbuffer(buffer, h, flag);
	h = 0;
	i = ft_strlen(buffer) - 1;
	while (i-- > h++)
		ft_swap(buffer[i], buffer[h]);
	(*len) = ft_putstr(buffer);
}
