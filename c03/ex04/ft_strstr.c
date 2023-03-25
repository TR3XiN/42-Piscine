/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:45:17 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/21 12:45:18 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i1] != '\0')
	{
		while (str[i1 + i2] == to_find[i2] && str[i1 + i2] != '\0')
			i2++;
		if (to_find[i2] == '\0')
			return (&str[i1]);
		i2 = 0;
		i1++;
	}
	return (0);
}

/*int	main(void)
{
	char	a[] = "A 42 vai deixar-me maluco";
	char	b[] = "vai";
	char	*found;
	
	found = ft_strstr(a, b);
	printf("%s\n", found);
}*/
