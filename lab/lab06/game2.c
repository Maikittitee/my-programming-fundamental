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

typedef struct bullet{
	int	bx;
	int	by;
	int status;
} bullet;

int		x = 38;
int		y = 20;

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
	//printf("(%d,%d)",x,y);
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

void	move(char ch)
{
	if(ch=='a' && x > 0) 
	{
		ease_ship(x,y);
		draw_ship(--x,y);
	}
	if(ch=='d' && x < 80) 
	{
		ease_ship(x,y);
		draw_ship(++x,y);
	}
}

int main()
{
	setcursor(0);
	char	ch;
	char	ship_status;
	int	x1;
	int	y1 = 0;
	int bull_status = 0;
	
	ch = 'z';
	draw_ship(x,y);
	while (ch != 'x')
	{
		if (_kbhit())
		{
			ch=_getch();
			if (ch == 'a' || ch == 'd')
				ship_status = ch;
			if (ch == ' ' && !bull_status)
			{
				x1 = x+2;
				y1 = y-1;
				bull_status = 1;
				//bull_count += 1;
				//printf("spb is press\n");
			} 
			fflush(stdin);
		}
		move(ship_status);
		if (bull_status)
		{
			ease_bullet(x1,y1);
			if (y1 > 0)
				draw_bullet(x1,--y1);
			else
			{
				ease_bullet(x1,y1);
				bull_status = 0;
			}
		}
		Sleep(100);
	}

	return 0;
}