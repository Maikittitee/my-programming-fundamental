#include<stdio.h>
#include<string.h>

void	convert(char *str)
{
	int	i;
	int	j;
	int	sum;

	i = 0;
	j = 0;
	sum = 0;
	while (str[i])
	{
		sum = sum * 2 + (str[i] - '0');
		i++;
		if (j == 7)
		{
			printf("%c",sum);
			sum = 0;
			j = -1;
		}
		j++;

	}
}


int	main(int argc, char **argv)
{
	char	str[121];

	strcpy(str,"010101000110100001100001011101000010011101110011001000000110001101101111011100100111001001100101011000110111010000101110");
	convert(str);
}
