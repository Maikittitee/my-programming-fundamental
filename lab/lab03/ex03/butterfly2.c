#include<stdio.h>

int	main()
{
	int n;
	int r;
	int c;
	int boxsize;


	n = 3;
	boxsize = 2 * n - 1;
	r = 1;
	while (r <= boxsize)
	{
		c = 1;
		while (c <= boxsize)
		{
			if ((c <= r || c >= boxsize - r + 1) && !(c < r && c > boxsize - r + 1))
				printf("(%d,%d)",c,r);
			else
				printf("     ");
			c++;
		}
		printf("\n");
		r++;
	}

	
}
