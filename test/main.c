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
	void	*p = NULL;

	printf("std: "); r1 = printf("%c", 'a'); printf("\n");
	printf("ft : "); r2 = ft_printf("%c", 'a'); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%s", "hello"); printf("\n");
	printf("ft : "); r2 = ft_printf("%s", "hello"); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%s", s); printf("\n");
	printf("ft : "); r2 = ft_printf("%s", s); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%p", &r1); printf("\n");
	printf("ft : "); r2 = ft_printf("%p", &r1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%p", p); printf("\n");
	printf("ft : "); r2 = ft_printf("%p", p); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%%"); printf("\n");
	printf("ft : "); r2 = ft_printf("%%"); printf("\n");
	check(r1, r2);
}

void	test_b(void)
{
	int	r1;
	int	r2;

	printf("std: "); r1 = printf("%d", 42); printf("\n");
	printf("ft : "); r2 = ft_printf("%d", 42); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%d", -42); printf("\n");
	printf("ft : "); r2 = ft_printf("%d", -42); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%d", 0); printf("\n");
	printf("ft : "); r2 = ft_printf("%d", 0); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%d", 2147483647); printf("\n");
	printf("ft : "); r2 = ft_printf("%d", 2147483647); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%d", -2147483647 - 1); printf("\n");
	printf("ft : "); r2 = ft_printf("%d", -2147483647 - 1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%i", 123); printf("\n");
	printf("ft : "); r2 = ft_printf("%i", 123); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%i", -123); printf("\n");
	printf("ft : "); r2 = ft_printf("%i", -123); printf("\n");
	check(r1, r2);
}

void	test_c(void)
{
	int	r1;
	int	r2;

	printf("std: "); r1 = printf("%u", -1); printf("\n");
	printf("ft : "); r2 = ft_printf("%u", -1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%u", 0); printf("\n");
	printf("ft : "); r2 = ft_printf("%u", 0); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%x", 255); printf("\n");
	printf("ft : "); r2 = ft_printf("%x", 255); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%x", -1); printf("\n");
	printf("ft : "); r2 = ft_printf("%x", -1); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%X", 255); printf("\n");
	printf("ft : "); r2 = ft_printf("%X", 255); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%X", 3735928559u); printf("\n");
	printf("ft : "); r2 = ft_printf("%X", 3735928559u); printf("\n");
	check(r1, r2);
	printf("std: "); r1 = printf("%c %s %d", 'a', "hi", 7); printf("\n");
	printf("ft : "); r2 = ft_printf("%c %s %d", 'a', "hi", 7); printf("\n");
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
