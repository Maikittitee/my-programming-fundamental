#include <stdio.h>
#include <stdlib.h>

char	maker(int r, int c, int lim)
{
	char	n;

	if ((c <= r || c >= lim - r + 1) && !(c < r && c > lim - r + 1))
		n = '*';
	else
		n = ' ';
	return (n);
}

void	make_butter(int nb)
{
	int	r;
	int	c;
	int 	lim;

	lim = 2 * nb - 1;

	r = 1;

	while (r <= lim)
	{
		c = 1;
		while (c <= lim)
		{
			printf(" %c ", maker(r, c, lim));
			c++;
		}
		r++;
		printf("\n");
	}
}
int	main(int argc, char **argv)
{
	int	nb;

	printf("Enter Number :");
	scanf("%d",&nb);
	make_butter(nb);
}
