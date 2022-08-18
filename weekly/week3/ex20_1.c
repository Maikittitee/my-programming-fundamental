#include <stdlib.h>
#include <stdio.h>

void make_stars(int nb)
{
	int	i;

	i = 0;
	while (i++ < nb)
		printf("*");
	printf("\n");
}

void run_test(void)
{	
	printf("input : 1\n");
	printf("output : \n");
	make_stars(1);
	printf("input : 4\n");
	printf("output : \n");
	make_stars(4);
	printf("input : 10\n");
	printf("output : \n");
	make_stars(10);
	printf("input : 12\n");
	printf("output : \n");
	make_stars(12);
	printf("input : 42\n");
	printf("output : \n");
	make_stars(42);
	printf("input : 123\n");
	printf("output : \n");
	make_stars(123);
	printf("input : -11\n");
	printf("output : \n");
	make_stars(-11);
}

int	main(int argc, char **argv)
{
	if (argc <= 2)
		make_stars(atoi(argv[1]));
	else
		run_test();
}
