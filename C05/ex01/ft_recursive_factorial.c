/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcirpici <tcirpici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 04:58:39 by tcirpici          #+#    #+#             */
/*   Updated: 2024/08/28 05:02:27 by tcirpici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    int result;

    result = 1;
    if (nb < 0)
    {
        return (0);
    }
    while(nb -1 >= 0)
    {
        result = nb * ft_recursive_factorial(nb -1);
    }
    return (result);
}