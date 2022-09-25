#include <stdio.h>

int	gift(int n)
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
	return (count * 2);
}

int	main()
{
	int	p;

	printf("Enter number of people > ");
	scanf("%d",&p);
	printf("Need %d card\n",gift(p));
}
