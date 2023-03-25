/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 05:57:11 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/20 05:57:12 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
	{
		i1++;
	}
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[] = "vida";
	char	s2[] = "boa";
	
	printf("---Antes---\n");
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("---Depois---\n");
	printf("%s\n", ft_strncat(s1, s2, 1));
}
