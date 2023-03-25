/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 04:52:44 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/20 04:52:46 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	char	s1[] = "42";
	char	s2[] = "Escola 42";
	
	printf("S1: %s\n", s1);
	printf("S2: %s\n", s2);
	printf("difference: %d\n", ft_strcmp(s1,s2));
	printf("difference: %d\n", ft_strcmp(s2,s1));
	printf("--------------------------------\n");
	printf("difference: %d\n", strcmp(s1,s2));
	printf("difference: %d\n", strcmp(s2,s1));
}*/
