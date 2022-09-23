#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

typedef struct p_list{
	char name[50];
	int	lv;
	int	sc;
} t_list;

int	main()
{
	t_list p[5];
	FILE *fp;
	int i;
	int	j;

	i = 0;
	fp = fopen("test","w");
	//Protect file opened
	if (!fp)
		printf("cannot open file\n");
	//loop for enter input 0-4 (5 element)
	while (i < 5)
	{
		printf("Enter person %d 's name level score > ",i);
		scanf("%s %d %d",p[i].name,&(p[i].lv),&(p[i].sc));
		i++;
	}
	//loop for write file
	j = 0;	
	while (j < 5)
	{
		fprintf(fp, "%s %d %d\n", p[j].name, p[j].lv, p[j].sc);
		j++;
	}
}