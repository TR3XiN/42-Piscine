/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:57:59 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/16 15:05:54 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 130;
	b = 30;
	printf("------Check------\n");
	printf("a: %d, b: %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d\n", div, mod);
}*/
