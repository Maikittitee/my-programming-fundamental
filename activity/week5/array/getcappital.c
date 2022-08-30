#include <stdio.h>

int	iscap(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	getcap(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if(iscap(s[i]))
			printf("%c",s[i]);
		i++;
	}
}

int	main()
{
	char str[100];

	printf("Enter String : ");
	scanf("%s",str);
	getcap(str);
	return (0);
}
