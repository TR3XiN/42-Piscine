/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:25:10 by jterra-e          #+#    #+#             */
/*   Updated: 2023/03/29 13:04:06 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*a;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	a = (int *) malloc(sizeof(int) * size);
	if (!range)
	{
		*range = NULL;
		return (0);
	}
	*range = a;
	while ((min + i) < max)
	{
		a[i] = min + i;
		i++;
	}	
	return (size);
}
