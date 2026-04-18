/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wong koon wei <wkoon-we@student.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 08:56:41 by wong koon w       #+#    #+#             */
/*   Updated: 2026/04/18 08:56:41 by wong koon w      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	valid(int *sample)
{
    int	i;
	int	start;

	i = 1;
	start = 0;
    while (start < 2)
    {
        if (i == 4)
        {
            start ++;
            i = start + 1;
        }
        if (sample[start] != 2)
        {
            if (sample[start] == sample[i])
                write(1, "Error\n", 6);
        }
        i ++;
    }
}