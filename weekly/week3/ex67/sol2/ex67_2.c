#include<stdio.h>
#include<string.h>

int	ft_power2(int power)
{
	int	i;
	int	result;


	if (power == 0)	
		return (1);
	i = 0;
	result = 1;
	while (i < power)
	{
		result *= 2;
		i++;
	}
	return (result);
}

void	convert(char *str)
{
	int	i;
	int	sum;
	int	p;

	i = 0;
	while (str[i])
	{
		p = 7;
		sum = 0;
		while (p >= 0 && str[i])
		{
			sum += ft_power2(p)* (str[i] - '0');
			p--;
			i++;
		}
		printf("%c",sum);
	}
}


int	main(int argc, char **argv)
{
	char	str[121];

	strcpy(str,"010101000110100001100001011101000010011101110011001000000110001101101111011100100111001001100101011000110111010000101110");
	convert(str);
}
