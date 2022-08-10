#include<stdio.h>

void bmi(float w, float h)
{
	float	bmi;

	bmi = w / (h * h);
	if (bmi < 18.5)
		printf("lower than standard\n");
	else if (bmi >= 18.5 && bmi <= 24.9)
		printf("Standard\n");
	else if (bmi > 25 && bmi <= 29.9)
		printf("Higher than standard\n");
	else
		printf("Too fat\n");
}

int	main()
{
	float	w;
	float	h;

	printf("How");
}
