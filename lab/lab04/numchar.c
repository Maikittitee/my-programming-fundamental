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
		//printf("bp 20 i = %d , str[i] = %c , n = %d\n",i,str[i],n);
		if (isnumber(str[i]))
		{
			n *= 10;
			n += str[i] - '0';
		//	printf("bp 25 i = %d , str[i] = %c , n = %d\n",i,str[i],n);
		}
		else
		{
			//printf("bp 27 i = %d , str[i] = %c, str[i - 1] = %c, n = %d\n",i,str[i],str[i - 1], n);
			if (str[i - 1] && isnumber(str[i - 1]))
				loop_char(str[i], n);
			else
				printf("%c", str[i]);
			n = 0;
		}
		//printf("- - - - - - \n");
		i++;

	}
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		char	str[150];

		printf("Enter String : ");
		scanf("%s",str);
		numchar(str);
	}
	else if (argc == 2)
		numchar(argv[1]);
	else
	{

			printf("input : 3A2D\n");
			printf("expect output :AAADD \n");
			printf("Program output : \n");
			numchar("3A2D");
			printf("\n");
			printf("----------\n");
			printf("input : A3D\n");
			printf("expect output :ADDD \n");
			printf("Program output : \n");
			numchar("A3D");
			printf("\n");
			printf("----------\n");
			printf("input : A12D\n");
			printf("expect output :ADDDDDDDDDDDD \n");
			printf("Program output : \n");
			numchar("A12D");
			printf("\n");
			printf("----------\n");
			printf("input : 12Dkg\n");
			printf("expect output :DDDDDDDDDDDDkg \n");
			printf("Program output :\n ");
			numchar("12Dkg");
			printf("\n");
			printf("----------\n");
			printf("input : abc\n");
			printf("expect output :abc \n");
			printf("Program output : \n");
			numchar("abc");
			printf("\n");
			printf("----------\n");
			printf("input : HE2LO\n");
			printf("expect output :HELLO \n");
			printf("Program output : \n");
			numchar("HE2LO");
			printf("\n");
			printf("----------\n");
			printf("input : 1234\n");
			printf("expect output : [null] \n");
			printf("Program output : \n");
			numchar("1234");
			printf("\n");
			printf("----------\n");
			printf("input : 2147483648A\n");
			printf("expect output : {Error]\n");
			printf("Program output : \n");
			numchar("2147483648A");
			printf("\n");
			printf("----------\n");
	}
}

