/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcirpici <tcirpici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 05:02:51 by tcirpici          #+#    #+#             */
/*   Updated: 2024/08/28 05:08:21 by tcirpici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int i;

    i = 1;
    if(power == 0 && nb == 0)
    {
        return(1);
    }
    if(power < 0)
    {
        return(0);
    }
    while(i < power)
    {
        nb *= nb;
        i++;
    }
return nb;
}