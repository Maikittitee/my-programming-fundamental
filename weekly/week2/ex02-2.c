#include<stdio.h>

void bmi(int w, int h)
{
	int	bmi;

	bmi = w / (h * h);
	switch (bmi)
	{
		case (bmi < 18.5):
			printf("lower than standard\n");
		case (bmi >= 18.5 && bmi <= 24.9):
			printf("Standard\n");
		case (bmi > 25 && bmi <= 29.9):
			printf("Higher than standard\n");
		default:
			printf("Too fat\n");
	}
}

int	main()
{
	float	w;
	float	h;

	printf("How");
}
