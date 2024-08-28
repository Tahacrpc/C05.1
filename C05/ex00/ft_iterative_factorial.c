/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcirpici <tcirpici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 04:53:53 by tcirpici          #+#    #+#             */
/*   Updated: 2024/08/28 04:58:08 by tcirpici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    if(nb < 0)
    {
        return (0);
    }
    int result = 1;
    while(0 < nb)
    {
        result *= nb;
        nb--;
    }
    return (result);
}