/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:55:14 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/27 13:55:15 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **sw1, char **sw2)
{
	char	*tmp;

	tmp = *sw1;
	*sw1 = *sw2;
	*sw2 = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (s1[i1] == s2[i2] && s2[i2] != '\0')
	{
		i1++;
		i2++;
	}
	return (s1[i1] - s2[i2]);
}

int	main(int argc, char **argv)
{
	int	s;
	int	d;

	s = 0;
	while (s < argc -1)
	{
		d = 1;
		while (d < argc -1)
		{
			if (ft_strcmp(argv[d], argv[d + 1]) > 0)
				ft_swap(&argv[d], &argv[d + 1]);
			else
				d++;
		}
		s++;
	}
	d = 1;
	while (argv[d])
	{
		ft_putstr(argv[d]);
		s++;
		d++;
	}
}
