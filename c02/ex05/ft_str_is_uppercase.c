/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 04:16:12 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/20 04:16:13 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char upcase[] = "FILIPE";
	char *p_up;
	p_up = upcase;

	char notupcase[] = "filiPE";
	char *p_not;
	p_not = notupcase;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n");
	printf("%s = %d\n", upcase, ft_str_is_uppercase(p_up));
	printf("%s = %d\n", notupcase, ft_str_is_uppercase(p_not));
	printf("Empty = %d\n", ft_str_is_uppercase(p_emp));
	printf("-----\n");
}*/
