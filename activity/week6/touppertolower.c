#include <stdio.h>
#include <ctype.h>

int	main()
{
	char	str[150];

	char	*p;

	printf("Enter String > ");
	scanf("%s",str);

	p = str;
	while (*p)
	{
		if (isupper(*p))
			printf("%c",*p + 32);
		else if (islower(*p))
			printf("%c",*p - 32);
		(p++);
	}
}
