#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*void	putbit(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i])
	{
		printf("%c",str[i]);
		if (count == 4)
		{
			count = 0;
			printf(" ");
		}
		count++;
		i++;

	}
}*/

char	*strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	i = 0;
	len = strlen(str);
	while (i <= len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}

void	putnbr_base(char *base,int nb)
{
	int	remain;
	char	p[100];
	int	i;
	int	len;
	
	i = 0;
	while (nb > 0)
	{
		remain = nb % 2;
		p[i] = base[remain];
		nb /= 2;
		i++;
	}
	len = strlen(p);
	while (len % 4 != 0)
	{
		p[i] = '0';
		i++;
		len++;
	}
	//putbit(strrev(p));
	printf("\n%s",strrev(p));
}


int	main(void)
{
	char	str[150];
	int	nb;

	printf("Enter number : ");
	scanf("%s",str);

	nb = atoi(str);

	putnbr_base("01",nb);

	//printf("%s",strrev(str));
}


