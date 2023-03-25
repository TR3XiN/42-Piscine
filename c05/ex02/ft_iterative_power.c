/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:26:39 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/25 16:26:56 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    
    i = nb;
    if(power == 0)
    {
        return (1);
    }
    if (power < 0)
    {
        return(0);
    }
    while (power > 1)
    {
        nb = nb * i;
        power--;
    }
    return (nb);
}
/*int main(int argc, char **argv)
{
    if(argc == 3)
        printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
    else
        printf("404\n");
}*/