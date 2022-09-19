#include<stdio.h>

void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int x;
	int y;

	printf("Enter x >");
	scanf("%d",&x);
	printf("Enter y >");
	scanf("%d",&y);

	printf("before swap : %d %d\n",x,y);
	swap(&x,&y);
	printf("after swap : %d %d\n",x,y);
}
