/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:20:42 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/16 22:20:43 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Hello World.";
	char	dest[] = "Coding in C";
	char	*desti;
	
	printf("Before\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	desti = ft_strcpy(dest, src);
	printf("After\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	return (0);
}*/
