/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 05:14:38 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/20 05:14:40 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
	{
		i++;
	}
	if (s1[i] != s2[i] && i < n)
	{
		return ((unsigned int)s1[i] - (unsigned int)s2[i]);
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "Nada a ver abcd";
	char	s2[] = "Nada a ver abcE";

	printf("s1 e 2: %d\n", ft_strncmp(s1, s2, 20));
	printf("s2 e 1: %d\n", ft_strncmp(s2, s1, 20));
}*/

/*int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%i", ft_strncmp(argv[1], argv[2], 5));
	else
		return(0);
}*/
