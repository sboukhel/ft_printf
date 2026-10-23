/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukhel <sboukhel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:44:40 by sboukhel          #+#    #+#             */
/*   Updated: 2026/10/23 12:45:11 by sboukhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "printf.h"

void	check(int r1, int r2)
{
	if (r1 == r2)
		printf("\033[32mOK\033[0m (return: %d | %d)\n\n", r1, r2);
	else
		printf("\033[31mKO\033[0m (return: %d | %d)\n\n", r1, r2);
}

void	test_a(void)
{
	int		r1;
	int		r2;
	char	*s = NULL;

	printf("std: "); r1 = printf("%c", 'a' + 256); printf("\n");
	printf("ft : "); r2 = ft_printf("%c", 'a' + 256); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%c", -1); printf("\n");
	printf("ft : "); r2 = ft_printf("%c", -1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("a%sb", s); printf("\n");
	printf("ft : "); r2 = ft_printf("a%sb", s); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%s%s", s, s); printf("\n");
	printf("ft : "); r2 = ft_printf("%s%s", s, s); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%c%%%c", 'x', 'y'); printf("\n");
	printf("ft : "); r2 = ft_printf("%c%%%c", 'x', 'y'); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%%%s%%", "mid"); printf("\n");
	printf("ft : "); r2 = ft_printf("%%%s%%", "mid"); printf("\n");
	check(r1, r2);
}

void	test_b(void)
{
	int	r1;
	int	r2;

	printf("std: "); r1 = printf("%d%d", 2147483647, -2147483647 - 1); printf("\n");
	printf("ft : "); r2 = ft_printf("%d%d", 2147483647, -2147483647 - 1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%d", 1000000000); printf("\n");
	printf("ft : "); r2 = ft_printf("%d", 1000000000); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%d", -1000000000); printf("\n");
	printf("ft : "); r2 = ft_printf("%d", -1000000000); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%u%u", -1, -1); printf("\n");
	printf("ft : "); r2 = ft_printf("%u%u", -1, -1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%u", 4294967294u); printf("\n");
	printf("ft : "); r2 = ft_printf("%u", 4294967294u); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%%%d%%", 5); printf("\n");
	printf("ft : "); r2 = ft_printf("%%%d%%", 5); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%d %d %d %d %d %d %d %d %d %d", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10); printf("\n");
	printf("ft : "); r2 = ft_printf("%d %d %d %d %d %d %d %d %d %d", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10); printf("\n");
	check(r1, r2);
}

void	test_c(void)
{
	int		r1;
	int		r2;
	void	*p = NULL;

	printf("std: "); r1 = printf("%x%x%x", 0, 0, 0); printf("\n");
	printf("ft : "); r2 = ft_printf("%x%x%x", 0, 0, 0); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%X", 2147483648u); printf("\n");
	printf("ft : "); r2 = ft_printf("%X", 2147483648u); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%x", 2147483648u); printf("\n");
	printf("ft : "); r2 = ft_printf("%x", 2147483648u); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%p %p", p, &r1); printf("\n");
	printf("ft : "); r2 = ft_printf("%p %p", p, &r1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%p", (void *)0x7fffffffffffL); printf("\n");
	printf("ft : "); r2 = ft_printf("%p", (void *)0x7fffffffffffL); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%x%X%x%X", 10, 10, 255, 255); printf("\n");
	printf("ft : "); r2 = ft_printf("%x%X%x%X", 10, 10, 255, 255); printf("\n");
	check(r1, r2);
}

int	main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	test_a();
	test_b();
	test_c();
	return (0);
}
