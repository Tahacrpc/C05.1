/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:23:41 by marvin            #+#    #+#             */
/*   Updated: 2024/08/29 01:23:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if(nb == 2)
        return 1;
    if(nb < 2)
        return 0;
    if(nb % 2 == 0)
        return 0;
    while (i < nb / 2)
        if( nb % i == 0)
            return 0;
        else
            i++;
    return 1;
}
# include <stdio.h>
int main()
{
    printf ("%d", ft_is_prime(11));
}