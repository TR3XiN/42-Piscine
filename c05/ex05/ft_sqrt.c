/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:26:43 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/25 19:26:45 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
    long int i; //Index
    long int ir; //Index Result

    i = 0;
    ir = nb;
    while((i * i) <= ir)
    {
        if((i * i) == ir)
            return (i);
        i++;
    }
    return (0);
}
int main(void)
{
    int n1 = 48;

    printf("%d", ft_sqrt(n1));
}