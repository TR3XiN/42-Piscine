/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:55:33 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/16 13:04:55 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

/*int	main(void)
{
	int	num1;
	int	num2;

	num1 = 20;
	num2 = 5;
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	ft_swap(&num1, &num2);
	printf("Swap\n");
	printf("num1 = %d, num2 = %d", num1, num2);
}*/
