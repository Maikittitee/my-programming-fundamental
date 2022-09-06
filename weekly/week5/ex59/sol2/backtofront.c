#include <stdio.h>
#include <string.h>

int	main()
{
	char	t[150];
	int	i;

	bzero(t,150);
	printf("Enter string > ");
	scanf("%s",t);
	printf("Original : %s\n",t);

	if (!t[0])
		printf("There are nothing to reverse");
	i = 0;
	i = strlen(t);
	printf("Reverse : ");
	while(i-- >= 0)
	{
		printf("%c",t[i]);
	}
	printf("\n");
}
