//#include "../../../libft_00/libft.h"
#include <stdio.h>
#include <stdlib.h>


static char	box[8][8];

typedef struct rook
{
	int	i;
	int	j;
} rook;

int	count_box()
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (!(box[i][j]))
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

void show_board(char **box)
{
	int	i;
	int	j;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			printf("%d",box[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}
int	iseat(int i, int j ,rook *r, int n)
{
	int	index;
	index = 0;
	while (index < n)
	{
		if (r[index].i == i + 1 || r[index].j == j + 1)
			return (1);
		index++;
	}
	return (0);
}
void	loop_board(rook *r, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (iseat(i, j,r,n))
				box[i][j] = 1;
			j++;
		}
		i++;
	}	
}

int main()
{
	int	i;
	int	n;
	rook *r;

	i = 0;
	printf("Enter Number of Rook > ");
	scanf("%d",&n);
	r = calloc(sizeof(rook), n);
	while (i < n)
	{
		printf("Enter x y of rook(1 - 8) > ");
		scanf("%d %d",&(r[i].i),&(r[i].j));
		i++;
	}
	//show_board(box);
	loop_board(r,n);
	printf("Don't be eaten %d box",count_box());
	free(r);

}

