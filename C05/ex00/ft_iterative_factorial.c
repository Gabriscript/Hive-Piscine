/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:45:14 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/13 17:06:15 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5)); 
	printf("%d\n", ft_iterative_factorial(0)); 
	printf("%d\n", ft_iterative_factorial(-5)); 
	return (0);
}*/
