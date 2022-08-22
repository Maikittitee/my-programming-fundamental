#include <stdio.h>

char	maker(int len, int r, int c)
{	
	char	n;

	if (r == 0 || c == 0 || r == len - 1 || c == len - 1 )
		n = '*';
	else
		n = ' ';
	return (n);
}

void	squa(int len)
{
	int r;
	int c;

	r = 0;
	while (r < len)
	{
		c = 0;
		while (c < len)
		{
			printf("%c",maker(len, r, c));
			c++;
		}
		printf("\n");
		r++;
	}
}

int	main()
{
	int	len;

	printf("Enter Number : ");
	scanf("%d",&len);
	squa(len);
}
