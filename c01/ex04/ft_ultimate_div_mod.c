/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:17:56 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/16 17:17:58 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 5;
	printf("      Check      \n");
	printf("\n");
	printf("------Before-----\n");
	printf("\n");
	printf("Valor de a: %d\n", a);
	printf("Valor de b: %d\n", b);
	printf("\n");
	ft_ultimate_div_mod(&a, &b);
	printf("------After------\n");
	printf("\n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("\n");
	printf("-----------------");
}*/
