/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:59:38 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/23 15:59:39 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int     ft_recursive_factorial(int nb)
{	
	if (nb < 0)
		return (0);
	while(nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}

/*int	main(int argc, char **argv)
{
	if (argc < 1)
		return(0);
	else if (argc == 2)
	{
		printf("%d", ft_recursive_factorial(atoi(argv[1])));
	}
}*/
