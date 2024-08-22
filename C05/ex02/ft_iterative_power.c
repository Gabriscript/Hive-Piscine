/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:31:20 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/12 17:47:28 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf(" %d\n", ft_iterative_power(2, 3));  
	printf("%d\n", ft_iterative_power(5, 0)); 
	printf("%d\n", ft_iterative_power(-2, 3));  
	printf("%d\n", ft_iterative_power(2, -3));  
	return (0);
}*/
