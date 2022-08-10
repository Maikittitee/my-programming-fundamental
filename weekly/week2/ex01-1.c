#include<stdio.h>

int	main()
{
	float	a;
	float	b;

	printf("Enter Number [a] : ");
	scanf("%f", &a);
	printf("Enter Number [b] : ");
	scanf("%f", &b);
	printf("%.2f + %.2f = %.2f\n",a,b,a+b);
	printf("%.2f - %.2f = %.2f\n",a,b,a-b);
	printf("%.2f * %.2f = %.2f\n",a,b,a*b);
	printf("%.2f / %.2f = %.2f\n",a,b,a/b);
	return (0);
}
