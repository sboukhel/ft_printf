/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addr_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukhel <sboukhel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:08:36 by sboukhel          #+#    #+#             */
/*   Updated: 2026/10/22 21:52:20 by sboukhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	addr_hex(void *p, int *len)
{
	unsigned long long i;
	char	tmp;
	int	j = 0;

	i = (unsigned long long)p;
	char *buffer;
	char *hex = "0123456789abcdef";
	int index = 0;
	if (*len == -1){
		return ;
	}
	if (i == 0){
		buffer[0] == '0';
	}
	buffer = calloc(20 , sizeof(char));
	while (i > 0){
		buffer[index] = hex[i % 16];
		i = i / 16;
		index++;
	}
	buffer[index++] = 'x';
	buffer[index] = '0';
	while (index >= j){
		tmp = buffer[index];
		buffer[index--] = buffer[j];
		buffer[j++] = tmp;
	}
	(*len) = ft_putstr(buffer);
}
