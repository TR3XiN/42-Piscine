/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:59:38 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/29 19:25:37 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{	
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	int nb;
	int res;

	nb = -3;
	while (nb <= 10)
	{
		res = ft_recursive_factorial(nb);
		printf("> n = %d, n! = %d\n", nb, res);
		nb++;
	}
	return (0);
}

int     main(int argc, char **argv)
{
	//int	val;

	//val = atoi(argv[1]);
	if (argc < 1)
		return(0);
	else if (argc == 2) 
	{
		printf("%d", ft_recursive_factorial(atoi(argv[1])));
	}
	//printf("%d", ft_iterative_factorial(10));
}*/
