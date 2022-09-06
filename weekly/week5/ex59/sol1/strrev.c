#include<stdio.h>
#include<string.h>

void	ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	i = 0;
	len = strlen(str);
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
}

int	main(void)
{
	char	t[150];

	printf("Enter string > ");
	scanf("%s",t);
	printf("Original : %s\n",t);
	ft_strrev(t);
	printf("Reverse : %s\n",t);
}
