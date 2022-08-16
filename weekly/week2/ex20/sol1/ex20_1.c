#include <stdio.h>

void make_stars(int nb)
{
	int	i;

	i = 0;
	while (i++ < nb)
		printf("*");
	printf("\n");
}

int	main()
{
	int	nb;

	printf("Enter Number : ");
	scanf("%d", &nb);
	make_stars(nb);
}
