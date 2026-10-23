/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukhel <sboukhel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 07:48:30 by sboukhel          #+#    #+#             */
/*   Updated: 2026/10/23 13:59:05 by sboukhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(long n, int *len)
{
	if (*len == -1)
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		*len += 1;
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10, len);
	ft_putchar((n % 10) + 48);
	(*len)++;
}
