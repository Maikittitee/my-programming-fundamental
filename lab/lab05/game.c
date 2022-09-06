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

#include<stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(
	GetStdHandle(STD_OUTPUT_HANDLE) , c);
}
void	draw_ship()
{
	printf(" <-0-> ");
}

int	main(void)
{
	draw_ship();
	return 0;
}
