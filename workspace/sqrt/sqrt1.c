#include <stdio.h>

double	ft_sqrt(double nb)
{
	double	n1;
	double	n2;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	n1 = nb / 2;
	n2 = (n1 + nb / n1) / 2;
	while (n2 < n1)
	{
		n1 = n2;
		n2 = (n1 + nb / n1) / 2;
	}
	if (n1 * n1 != nb)
		return (0);
	return (n1);
}

int main()
{
    printf("%f\n",ft_sqrt(121232424));

    return 0;
}
