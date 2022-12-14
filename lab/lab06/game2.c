/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maikittitee <maikittitee@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:27:31 by maikittitee       #+#    #+#             */
/*   Updated: 2022/09/06 13:29:52 by maikittitee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>


int	max = 5;
int	pos_x[5],pos_y[5];
int	count = 0; 

typedef struct bullet{
	int	bx;
	int	by;
	int status;
} bullet;


void setcolor(int fg, int bg)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg*16+fg);
}

void setcursor(bool visible)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console,&lpCursor);
}

void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , c);
}

void	draw_bullet(int x1, int y1)
{
	gotoxy(x1,y1);
	setcolor(2,4);
	printf("^");
}

void	ease_bullet(int x1, int y1)
{
	gotoxy(x1,y1);
	setcolor(0,0);
	printf(" ");
}

void	draw_ship(int x, int y)
{
	gotoxy(x,y);
	setcolor(2,4);
	printf("<-0->");
}

void	ease_ship(int x, int y)
{
	gotoxy(x,y);
	setcolor(0,0);
	printf("     ");
}

//-----------------------------------------------------------

void	move_ship(int *status,int *x, int *y)
{
	if (*x + *status > 80)
		*status = 0;
	if (*x + *status < 0)
		*status = 0;

	ease_ship(*x,*y);
	*x += *status;
	draw_ship(*x , *y);
}

int main()
{
	setcursor(0);
	char	ch;
	int	ship_status;
	int	x1;
	int	y1 = 0;
	bullet bull[5];
	int	bull_status;
	int x =38, y = 20;
	
	ch = ' ';
	draw_ship(x,y);
	while (ch != 'x')
	{
		bull_status = 0;
		if (_kbhit())
		{
			ch=_getch();
			if (ch == 'a')
				ship_status = -1;
			if (ch == 'd')
				ship_status = 1;
			if (ch == 's')
				ship_status = 0;
			if (ch == ' ')
				bull_status = 1;
			fflush(stdin);
		}
		if (ship_status != 0)
			move_ship(&ship_status,&x,&y);
		if (bull_status && pos_y[count] < 0)
		{
			if (y > 0)
			{
				pos_x[count] = x + 2;
				pos_y[count] = y - 1;
				count++;
				count %= max;
				draw_bullet(x+2, y-1);
			}
		}
		for(int i = 0; i < max; i++)
		{
			if (pos_y[i] < 0)
				continue;
			ease_bullet (pos_x[i],pos_y[i]);
			pos_y[i]--;
			if (pos_y[i] >= 0)
				draw_bullet(pos_x[i], pos_y[i]);
		}
		Sleep(100);
	}

	return 0;
}