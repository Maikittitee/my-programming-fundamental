#include <stdio.h>

int	is_factor(int nb, int i)
{
	if (nb % i == 0)
		return (1);
	else
		return (0);
}

int	p(int x)
{
	int	i;
	int	sum;

	i = 1;
	sum = 0;

	while (i < x)
	{
		if (is_factor(x,i))
			sum += i;
		i++;
	}
	return (sum);
}

int	main()
{
	int	i;

	i = 1;

	while (i <= 10000)
	{
		if (p(i) == i)
			printf("%d\n", p(i));
		i++;
	}
}

