/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:29:06 by jterra-e          #+#    #+#             */
/*   Updated: 2023/03/29 13:06:12 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strlengtner(char **strs, int sep, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]) + sep;
		i++;
	}
	return (len - sep);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		a;
	char	*dest;

	a = ft_strlengtner(strs, ft_strlen(sep), size);
	i = 0;
	if (size == 0)
	{
		dest = (char *) malloc (sizeof(char));
		*dest = '\0';
		return (dest);
	}
	dest = (char *) malloc(sizeof(char) * (a + 1));
	if (!dest)
		return (0);
	dest[0] = ('\0');
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i != size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
