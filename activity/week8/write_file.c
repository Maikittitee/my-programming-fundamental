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
	t_list *ptr;
	int i;

	i = 0;
	fp = fopen("test","w");
	if (!fp)
		printf("cannot open file\n");
	//ptr = &p1;
	printf("Enter person 0 's name level score",i);
	scanf("%s %d %d",p[0].name,&(p[0].lv),&(p[0].sc));
	/*while (i < 5)
	{
		i++;
	}*/
	fprintf(fp,"%s %d %d\n",p[0].name,p[0].lv,p[0].sc);
	//printf("name = %s",p[2].name);
	//printf("lv = %d",p[2].lv);
	//printf("score = %d",p[2].sc);
}