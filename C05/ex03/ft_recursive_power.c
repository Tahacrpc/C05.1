/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 23:02:17 by marvin            #+#    #+#             */
/*   Updated: 2024/08/28 23:02:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if(power == 0)
    {
        return 1;
    }
    return nb * ft_recursive_power(nb, power -1);
}
#include <stdio.h>
int main()
{
    printf("%d", ft_recursive_power(2, 5));
}