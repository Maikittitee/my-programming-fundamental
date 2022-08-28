#include <stdio.h>

void	putnbr_base(int nb)
{	
	if (nb != 0)
	{
		putnbr_base(nb / 2);
		printf("%d",nb % 2);
	}
}

int	main()
{
	int	nb;
	printf("Enter Number : ");
	scanf("%d",&nb);
	putnbr_base(nb);
}