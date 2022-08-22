#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void	loop_char(char c,int i)
{
	while (i-- > 0)
		printf("%c",c);
}

void	numchar(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (isnumber(str[i]))
		{
			n *= 10;
			n += str[i] - '0';
		}
		else
		{
			if (str[i - 1] && isnumber(str[i - 1]))
				loop_char(str[i], n);
			else
				printf("%c", str[i]);
			n = 0;
		}
		i++;

	}
}

int	main(int argc, char **argv)
{
	char	str[150];

	printf("Enter String : ");
	scanf("%s",str);
	numchar(str);
}

