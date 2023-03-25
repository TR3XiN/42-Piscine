/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 05:33:11 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/20 05:33:14 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
	{
		i1++;
	}
	while (src[i2] != '\0')
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = " 42";
	char	dest[] = "Escola";
	char	*catt;
	//char	*catt2;
	
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	catt = ft_strcat(dest, src);
	//catt2 = strcat(dest, src);
	printf("Final: %s\n", catt);
	//printf("Final: %s\n", catt2);
}*/
