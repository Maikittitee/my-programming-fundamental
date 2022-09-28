/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rook1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:24:33 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/29 00:15:51 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_checkinstr(char *str, int c)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == (char)c)
			return (1);
		str++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	buffer = malloc((strlen(s1) + strlen(s2) + 1) * sizeof (char));
	if (!buffer)
		return (NULL);
	bzero(buffer, strlen(s1) + strlen(s2) + 1);
	i = 0;
	j = 0;
	while (s1[j])
		buffer[i++] = s1[j++];
	j = 0;
	while (s2[j])
		buffer[i++] = s2[j++];
	return (buffer);
}

static int	ft_intlen(long n)
{
	long	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}	
	return ((int)i);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		len;

	len = ft_intlen(n);
	buffer = calloc(len + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	if (n == 0)
		memcpy(buffer, "0\0", 2);
	if (n == -2147483648)
	{
		memcpy(buffer, "-2147483648\0", 12);
		n = 0;
	}
	if (n < 0)
	{
		buffer[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		buffer[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (buffer);
}

int	main(void)
{
	size_t	n;
	char	*x;
	char	*y;
	char	*xtoa;
	char	*ytoa;
	int		input_x = 0;
	int		input_y = 0;

	x = "";
	y = "";
	printf("Enter number of rook >");
	scanf("%zu", &n);
	while (n > 0)
	{
		printf("Enter x y sep by spacebar > ");
		scanf("%d %d", &input_x, &input_y);
		xtoa = ft_itoa(input_x);
		ytoa = ft_itoa(input_y);
		if (!ft_checkinstr(x, *xtoa))
			x = ft_strjoin(x, xtoa);
		if (!ft_checkinstr(y, *ytoa))
			y = ft_strjoin(y, ytoa);
		n--;
	}
	printf("Don't be eaten %lu box",(8 - strlen(x)) * (8 - strlen(y)));
	free(x);
	free(y);
	free(xtoa);
	free(ytoa);
	return (0);
}
