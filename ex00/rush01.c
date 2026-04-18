/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wong koon wei <wkoon-we@student.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 19:13:04 by wong koon w       #+#    #+#             */
/*   Updated: 2026/04/17 19:13:04 by wong koon w      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	row(int *left, int *right);
void	column(int *top, int *bottom);
void	combines(int **combine);

void	rush01(char **input)
{
	int		i;
	int		count;
	int		combine[2][4];

	i = 0;
	count = 0;
	while (count < 4)
	{
		combine[0][count] = input[1][i] - '0';
		combine[1][count] = input[1][i + 8] - '0';
		i += 2;
		count ++;
	}
	column(combine[0], combine[1]);
	count = 0;
	while (count < 4)
	{
		combine[0][count] = input[1][i + 8] - '0';
		combine[1][count] = input[1][i + 16] - '0';
		i += 2;
		count ++;
	}
	row(combine[0], combine[1]);
}
