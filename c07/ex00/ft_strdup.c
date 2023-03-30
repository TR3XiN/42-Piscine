/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:07:01 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/28 12:07:02 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strcpy(char *src, char *dest)
{
    int     i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] != '\0';
    return (dest);
}

char    *ft_strdup(char *src)
{
    //int     i;
    char *dest;

    dest = (char *) malloc (sizeof(char));
    if(!dest)
        return(0);
    ft_strcpy(src, dest);
}

int     main(void)
{
    char    *si;
    char    *alloc;

    si = "Hello School 42";
    printf("Base : $%s$ @ %p\n", si, si);
    alloc = ft_strdup(si);
    printf("Copied FT_STRDUP : $%s$ @ %p\n", alloc, alloc);
}