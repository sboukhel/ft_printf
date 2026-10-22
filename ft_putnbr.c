/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukhel <sboukhel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 07:48:30 by sboukhel          #+#    #+#             */
/*   Updated: 2026/10/22 09:55:28 by sboukhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	 ft_putnbr(long n, int *len)
{
    if (*len == -1) return ;

    if (n < 0)
    {
        if (ft_putchar('-') == -1) {
			*len = -1; return;
		}
        (*len)++;
        n = -n;
    }
    if (n > 9)
        ft_putnbr(n / 10, len);
    if (*len == -1) return ;

    if (ft_putchar((n % 10) + '0') == -1) {
		*len = -1; return;
	}
    (*len)++;
}
