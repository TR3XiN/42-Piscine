/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:25:13 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/21 18:25:14 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

/*int	main(void)
{
	ft_putnbr(20);
	write(1, "\n", 1);
	ft_putnbr(-2334);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(21312323);
	write(1, "\n", 1);
}*/
