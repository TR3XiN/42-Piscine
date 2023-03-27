/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 04:45:26 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/20 04:45:27 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	ia;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i - 1] && str[i - 1] <= 'z')
			ia = 1;
		else if ('0' <= str[i - 1] && str[i - 1] <= '9')
			ia = 1;
		else if ('A' <= str[i - 1] && str[i - 1] <= 'Z')
			ia = 1;
		else
			ia = 0;
		if ('A' <= str[i] && str[i] <= 'Z' && ia == 1)
			str[i] = str[i] + 32;
		if ('a' <= str[i] && str[i] <= 'z' && ia == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int main(void)
{
    char    s[] = "Escola 42";
    char    s1[] = "escola 42";
    char    s2[] = "o FutuRo";
    
    printf("----BEFORE----\n");
    printf("Primeira String: %s\n", s);
    printf("Segunda String: %s\n", s1);
    printf("Terceira String: %s\n", s2);
    printf("----AFTER----\n");
    printf("%s", ft_strcapitalize(s));
    printf("\n%s\n", ft_strcapitalize(s1));
    printf("%s\n", ft_strcapitalize(s2));
}*/
