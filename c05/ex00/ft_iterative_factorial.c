/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:37:08 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/23 12:37:10 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int     ft_iterative_factorial(int nb)
{
	int     res;
	
	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1) 
	{
		write(1, "Resultado igual a 1\n", 20);
	}
	while(nb > 0)
	{
		res = res * nb--;
	}
	return (res);
}
/*int     main(int argc, char **argv)
{
	//int	val;

	//val = atoi(argv[1]);
	if (argc < 1)
		return(0);
	else if (argc == 2) 
	{
		printf("%d", ft_iterative_factorial(atoi(argv[1])));
	}
	//printf("%d", ft_iterative_factorial(10));
}*/
