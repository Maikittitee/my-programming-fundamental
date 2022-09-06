#include <stdio.h>
void	ft_ultraswap(int *x,int *y)
{
	*x = *x * *y;
	*y = *x / *y;
	*x = *x / *y;
}

int	main()
{
	int	x;
	int	y;
	printf("Enter x and y (seperate by space) > ");
	scanf("%d %d",&x,&y);
	printf("original x = %d, y = %d\n",x,y);
	ft_ultraswap(&x,&y);
	printf("after swap x = %d, y = %d\n",x,y);
}
