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

void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , c);
}
void	draw_ship(int x, int y)
{
	gotoxy(x,y);
	printf(" <-0-> ");
	//printf("(%d,%d)",x,y);
}

void	ease_ship(int x, int y)
{
	gotoxy(x,y);
	printf("       ");
}

int main()
{
	char ch=' ';
	int x=35,y=20;
	draw_ship(x,y);
	do 
	{
		if (_kbhit())
		{
			ch=_getch();
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
			if(ch=='w' && y > 0) 
			{
				ease_ship(x,y);
				draw_ship(x,--y);
			}
			if(ch=='s' && y < 20) 
			{
				ease_ship(x,y);
				draw_ship(x,++y);
			}
			fflush(stdin);
		}
		Sleep(100);
	} while (ch!='x');
	return 0;
}