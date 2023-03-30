/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:11:04 by jterra-e          #+#    #+#             */
/*   Updated: 2023/03/29 13:02:50 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*t;

	i = 0;
	if (min >= max)
		return (NULL);
	t = (int *) malloc (sizeof(int) * (max - min));
	if (!t)
		return (NULL);
	while ((min + i) < max)
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}
