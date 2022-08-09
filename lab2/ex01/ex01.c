#include<stdio.h>

void	get_factor(int nbr)
{
	int	i;

	for (i = 1; i < nbr; i++)
	{
		if (nbr % i == 0 )
		{
			printf("%d x ", i);
		}
	}
	printf("%d\n", nbr);
}

int	main(void)
{
	int nbr;

	printf("Enter Number : ");
	scanf("%d", &nbr); 
	get_factor(nbr);
}

