/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 02:36:40 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/20 02:37:36 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char alpha[] = "Filipe";
	char *p_alph;
	p_alph = alpha;

	char special[] = "@frodrige";
	char *p_spec;
	p_spec = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n");
	printf("1 = only alphabetical chars\n");
	printf("0 = Not only alphabetical chars\n");
	printf("%s = %d\n", alpha, ft_str_is_alpha(p_alph));
	printf("%s = %d\n", special, ft_str_is_alpha(p_spec));
	printf("Empty = %d\n", ft_str_is_alpha(p_emp));
	printf("-----\n");
}*/
