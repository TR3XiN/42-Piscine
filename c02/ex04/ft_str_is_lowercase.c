/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 04:11:31 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/20 04:11:33 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char lowcase[] = "filipe";
	char *p_low;
	p_low = lowcase;

	char notlowcase[] = "@Ab";
	char *p_not;
	p_not = notlowcase;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n");
	printf("%s = %d\n", lowcase, ft_str_is_lowercase(p_low));
	printf("%s = %d\n", notlowcase, ft_str_is_lowercase(p_not));
	printf("Empty = %d\n", ft_str_is_lowercase(p_emp));
	printf("-----\n");
}*/
