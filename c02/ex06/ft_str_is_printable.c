/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 04:19:13 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/20 04:19:21 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char print[] = "@Frodrig3";
	char *p_print;
	p_print = print;

	char notprint[] = "ひと" ;
	char *p_not;
	p_not = notprint;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n");
	printf("%s = %d\n", print, ft_str_is_printable(p_print));
	printf("%s = %d\n", notprint, ft_str_is_printable(p_not));
	printf("Empty = %d\n", ft_str_is_printable(p_emp));
	printf("-----\n");
}*/
