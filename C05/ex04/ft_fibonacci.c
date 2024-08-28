/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 23:59:17 by marvin            #+#    #+#             */
/*   Updated: 2024/08/28 23:59:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    int index0;
    int index1;
    int result;

    index0 = 0;
    index1 = 1;
    if(index < 0)
        return -1;
    if (index == 0)
        return 0;
    if(index == 1)
        return 1;
    return ft_fibonacci(index - 1) + ft_fibonacci(index -2);
}
#include<stdio.h>
int main()
{
    printf("%d", ft_fibonacci(5));
}