/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addr_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukhel <sboukhel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:08:36 by sboukhel          #+#    #+#             */
/*   Updated: 2026/10/23 15:09:27 by sboukhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*filling_buffer(char *buffer, unsigned long long h)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (h > 0)
	{
		buffer[i] = hex[h % 16];
		h = h / 16;
		i++;
	}
	buffer[i++] = 'x';
	buffer[i] = '0';
	return (buffer);
}

void	swap(char s1, char s2)
{
	int	tmp;

	tmp = s1;
	s1 = s2;
	s2 = tmp;
}

void	addr_hex(void *p, int *len)
{
	unsigned long long	i;
	char				*buffer;
	int					index;

	i = (unsigned long long)p;
	index = 0;
	if (*len == -1)
		return ;
	if (i == 0)
	{
		(*len) = ft_putstr("(nil)");
		return ;
	}
	buffer = calloc(20, sizeof(char));
	filling_buffer(buffer, i);
	i = 0;
	index = ft_strlen(buffer);
	while (index >= i)
	{
		swap(buffer[index], buffer[i]);
		i++;
		index--;
	}
	(*len) = ft_putstr(buffer);
}
