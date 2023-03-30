/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:53:56 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/27 14:53:57 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	in;

	in = index;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(in - 1) + ft_fibonacci(in - 2));
}

/*int main(void)
{

    int res;
    int index;
    
    index = -2;
    while (index <= 10)
    {
        printf("\nIndex: %d\n", index);
        res = ft_fibonacci(index);
        printf("Fibonacci: %d", res);
        index++;
    }
    printf("\n");
}*/
