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

	printf("std: "); r1 = printf("%c", '\0'); printf("\n");
	printf("ft : "); r2 = ft_printf("%c", '\0'); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%s", ""); printf("\n");
	printf("ft : "); r2 = ft_printf("%s", ""); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%p", (void *)1); printf("\n");
	printf("ft : "); r2 = ft_printf("%p", (void *)1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%p", (void *)16); printf("\n");
	printf("ft : "); r2 = ft_printf("%p", (void *)16); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%p", (void *)-1); printf("\n");
	printf("ft : "); r2 = ft_printf("%p", (void *)-1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%p", (void *)4294967296); printf("\n");
	printf("ft : "); r2 = ft_printf("%p", (void *)4294967296); printf("\n");
	check(r1, r2);
}

void	test_b(void)
{
	int	r1;
	int	r2;

	printf("std: "); r1 = printf("Hello world"); printf("\n");
	printf("ft : "); r2 = ft_printf("Hello world"); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%%%%"); printf("\n");
	printf("ft : "); r2 = ft_printf("%%%%"); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("100%%"); printf("\n");
	printf("ft : "); r2 = ft_printf("100%%"); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%c%c%c", 'a', 'b', 'c'); printf("\n");
	printf("ft : "); r2 = ft_printf("%c%c%c", 'a', 'b', 'c'); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%s%s%s", "a", "b", "c"); printf("\n");
	printf("ft : "); r2 = ft_printf("%s%s%s", "a", "b", "c"); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%d%d%d", 1, -2, 3); printf("\n");
	printf("ft : "); r2 = ft_printf("%d%d%d", 1, -2, 3); printf("\n");
	check(r1, r2);
}

void	test_c(void)
{
	int	r1;
	int	r2;

	printf("std: "); r1 = printf("%x", 0); printf("\n");
	printf("ft : "); r2 = ft_printf("%x", 0); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%X", 0); printf("\n");
	printf("ft : "); r2 = ft_printf("%X", 0); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%x", 2147483647); printf("\n");
	printf("ft : "); r2 = ft_printf("%x", 2147483647); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%x", -2147483647 - 1); printf("\n");
	printf("ft : "); r2 = ft_printf("%x", -2147483647 - 1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%i", -2147483647 - 1); printf("\n");
	printf("ft : "); r2 = ft_printf("%i", -2147483647 - 1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%c %s %p %d %i %u %x %X %%", 'a', "s", &r1, 1, 2, 3u, 255, 255); printf("\n");
	printf("ft : "); r2 = ft_printf("%c %s %p %d %i %u %x %X %%", 'a', "s", &r1, 1, 2, 3u, 255, 255); printf("\n");
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
