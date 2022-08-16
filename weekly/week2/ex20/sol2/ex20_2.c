#include <stdio.h>

void make_stars(int nb)
{
	int	i;

	for (i = 0; i < nb; i++)
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
