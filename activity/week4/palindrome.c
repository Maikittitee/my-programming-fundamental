#include <stdio.h>

int	main()
{
	int	n;
	int	reversedInteger;
	int	remainder;
	int	originalInteger;

	reversedInteger = 0;
	printf("Enter an integer: ");
	scanf("%d", &n);
	originalInteger = n;
	// reversed integer is stored in variable (#1)
	while( n != 0 )
	{
		remainder = n % 10;
		reversedInteger = reversedInteger * 10 + remainder;
		n /= 10; //(#2)
		printf("BP#2 RevInt = %d\n",reversedInteger);
	}

	// palindrome if orignalInteger and reversedInteger are equal (#3)
	printf("BP#3 Final RevInt = %d\n",reversedInteger);
	if (originalInteger == reversedInteger)
		printf("%d is a palindrome.", originalInteger);
	else
		printf("%d is not a palindrome.", originalInteger);
	return 0;
}

