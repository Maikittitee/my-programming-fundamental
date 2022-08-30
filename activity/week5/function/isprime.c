#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	nb;

	printf("Enter Number : ");
	scanf("%d",&nb);
	if (ft_is_prime(nb))
		printf("%d is Prime\n",nb);
	else
		printf("%d is NOT Prime\n",nb);
	return (0);
}
