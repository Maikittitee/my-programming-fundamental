#include <stdio.h>

int	hand(int n)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	count = 0;
	while (i <= n)
	{
		j = i + 1;
		while (j <= n)
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

int	main()
{
	int	p;

	printf("Enter number of people > ");
	scanf("%d",&p);

	printf("hand-shake %d times",hand(p));
	//printf("%d\n",hand(2));

	//  for (int i = 0; i <= 100 ; i++)
	//  {
	//  	if (hand(i) == (i * (i-1)) / 2)
	//  		printf("n = %d [PASS]\n",i);
	//  	else
	//  		printf("n = %d [FAILED]\n",i);
	//  }
}
