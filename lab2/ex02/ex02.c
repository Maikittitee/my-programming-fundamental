#include<stdlib.h>
#include<stdio.h>

int	get_gcf(int n1, int n2)
{
	int	i;

	if (n1 >= n2)
		i = n1;
	else
		i = n2;
	while (i > 0)
	{
		if (n1 % i == 0 && n2 % i == 0)
			return (i);
		i--;
	}
	return (0);
}


int	main()
{
	int	n1;
	int	n2;

	printf("input first number : ");
	scanf("%d",&n1);
	printf("input second number : ");
	scanf("%d",&n2);
	printf("gcf of %d and %d is : %d\n",n1,n2,get_gcf(n1,n2));

}
