#include<stdio.h>

int	summary(int nb)
{
	int	sum;

	sum = 0;
	while (nb != 0)
	{
		sum += (nb % 10);
		nb /= 10;
	}

	while (sum > 9)
		sum = summary(sum);
	return (sum);
}

int	main()
{
	int	i;

	printf("Enter Number : ");
	scanf("%d",&i);
	printf("%d",summary(i));
}


