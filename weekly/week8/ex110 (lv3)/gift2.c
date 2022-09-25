#include <stdio.h>

int	gift(int n)
{
	return ( n * (n - 1);
}

int	main()
{
	int	p;

	printf("Enter number of people > ");
	scanf("%d",&p);
	printf("Need %d card",gift(p));
	//printf("%d\n",hand(2));

	//  for (int i = 0; i <= 100 ; i++)
	//  {
	//  	if (hand(i) == (i * (i-1)) / 2)
	//  		printf("n = %d [PASS]\n",i);
	//  	else
	//  		printf("n = %d [FAILED]\n",i);
	//  }
}
