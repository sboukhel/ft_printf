/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukhel <sboukhel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:42:05 by sboukhel          #+#    #+#             */
/*   Updated: 2026/10/23 12:42:35 by sboukhel         ###   ########.fr       */
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
	int	r1;
	int	r2;

	printf("std: "); r1 = printf("%c", ' '); printf("\n");
	printf("ft : "); r2 = ft_printf("%c", ' '); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%c", '0'); printf("\n");
	printf("ft : "); r2 = ft_printf("%c", '0'); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%c|%c", 'A', 'z'); printf("\n");
	printf("ft : "); r2 = ft_printf("%c|%c", 'A', 'z'); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%s", "hello world"); printf("\n");
	printf("ft : "); r2 = ft_printf("%s", "hello world"); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%s", "%d %s %c"); printf("\n");
	printf("ft : "); r2 = ft_printf("%s", "%d %s %c"); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("[%s]", "tab\there"); printf("\n");
	printf("ft : "); r2 = ft_printf("[%s]", "tab\there"); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%s %s", "42", "school"); printf("\n");
	printf("ft : "); r2 = ft_printf("%s %s", "42", "school"); printf("\n");
	check(r1, r2);
}

void	test_b(void)
{
	int	r1;
	int	r2;

	printf("std: "); r1 = printf("%d", 1); printf("\n");
	printf("ft : "); r2 = ft_printf("%d", 1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%d", 10); printf("\n");
	printf("ft : "); r2 = ft_printf("%d", 10); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%d", -1); printf("\n");
	printf("ft : "); r2 = ft_printf("%d", -1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%d", 1000000); printf("\n");
	printf("ft : "); r2 = ft_printf("%d", 1000000); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%i", -2147483647); printf("\n");
	printf("ft : "); r2 = ft_printf("%i", -2147483647); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%u", 10); printf("\n");
	printf("ft : "); r2 = ft_printf("%u", 10); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%u", -2147483647 - 1); printf("\n");
	printf("ft : "); r2 = ft_printf("%u", -2147483647 - 1); printf("\n");
	check(r1, r2);
}

void	test_c(void)
{
	int	r1;
	int	r2;

	printf("std: "); r1 = printf("%x", 15); printf("\n");
	printf("ft : "); r2 = ft_printf("%x", 15); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%x", 16); printf("\n");
	printf("ft : "); r2 = ft_printf("%x", 16); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%x", 4096); printf("\n");
	printf("ft : "); r2 = ft_printf("%x", 4096); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%X", 48879); printf("\n");
	printf("ft : "); r2 = ft_printf("%X", 48879); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%p %p", (void *)1, (void *)2); printf("\n");
	printf("ft : "); r2 = ft_printf("%p %p", (void *)1, (void *)2); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%p", (void *)(-9223372036854775807L - 1)); printf("\n");
	printf("ft : "); r2 = ft_printf("%p", (void *)(-9223372036854775807L - 1)); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%s%d%s%x", "a", 1, "b", 255); printf("\n");
	printf("ft : "); r2 = ft_printf("%s%d%s%x", "a", 1, "b", 255); printf("\n");
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
