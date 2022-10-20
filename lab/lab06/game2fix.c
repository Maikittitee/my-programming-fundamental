/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
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
int	count = 0; 

typedef struct bullet{
	int	x;
	int	y;
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

void show_info(int x, int y)
{
	gotoxy(0,0);
	setcolor(1,0);
	printf("x : %d\ny : %d\n",x,y);
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


int main()
{
	setcursor(0);
	char	ch;
	int	ship_status;
	bullet bull[5];
	int	bull_status;
	int x =38, y = 20;
	
	ch = ' ';
	draw_ship(x,y);
	while (ch != 'x')
	{
	show_info(x,y);
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
		//create ship 
		if (ship_status)
		{
			if (x + ship_status > 75)
				ship_status = 0;
			if (x + ship_status < 0)
				ship_status = 0;

			ease_ship(x,y);
			x += ship_status;
			draw_ship(x , y);
		}
	//	create bullet;
		if (bull_status && bull[count].y < 0)
		{
			if (y > 0)
			{
				bull[count].x = x + 2;
				bull[count].y = y - 1;
				count++;
				count %= max;
				draw_bullet(x+2, y-1);
			}
		}
		// //Bullet update
		// for (int i = 0; i < max; i++)
		// {
		// 	if (bull[i].y < 0)
		// 		continue;
		// 	ease_bullet (bull[i].x,bull[i].y);
		// 	bull[i].y = bull[i].y - 1;
		// 	if (bull[i].y >= 0)
		// 		draw_bullet(bull[i].x, bull[i].y);
		// }
		Sleep(100);
	}

	return 0;
}