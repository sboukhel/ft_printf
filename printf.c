/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukhel <sboukhel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 08:58:45 by sboukhel          #+#    #+#             */
/*   Updated: 2026/10/22 20:56:40 by sboukhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *s, ...){
	int	i;
	int returnSize;
	va_list args;

	i = 0;
	va_start(args, s);
	returnSize = 0;
	while (s[i]){
		if (s[i] == '%' && s[i + 1] == 'c'){
			char vall = (char)va_arg(args, int);
			ft_putchar(vall);
			returnSize++;
			i += 2;
			continue;
		}
		if (s[i] == '%' && (s[i + 1] == 'd' || s[i + 1] == 'i')){
			long vall = va_arg(args, int);
			int k;
			ft_putnbr(vall, &k);
			returnSize += k;
			i += 2;
			continue;
		}
		if (s[i] == '%' && s[i + 1] == 'p'){
			void *vall = va_arg(args, void *);
			int k;
			addr_hex(vall, &k);
			returnSize += k;
			i += 2;
			continue;
		}
		if (s[i] == '%' && s[i + 1] == 's'){
			char *vall = va_arg(args, char *);
			returnSize += ft_putstr(vall);
			i += 2;
			continue;
		}
		ft_putchar(s[i]);
		returnSize++;
		i++;
	}
	va_end(args);
	return returnSize;
}
