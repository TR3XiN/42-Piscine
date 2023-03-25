/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:26:39 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/25 19:09:29 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power)
{
    int i;

    i = nb;
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    while (power > 1)
        return (i * ft_recursive_power(i, power - 1));
}

int main(int argc, char **argv)
{
    if(argc == 3)
        printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
    else
        printf("Error 404\n");
}