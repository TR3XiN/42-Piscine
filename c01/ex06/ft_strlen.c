/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:09:57 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/16 19:09:59 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	return (len);
}

/*int	main(void)
{
	printf("Learning C with 42\n");
	printf("numero de caracteres: %d", ft_strlen("Learning C with 42"));
}*/
