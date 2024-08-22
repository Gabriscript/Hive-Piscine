/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:27:47 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/20 18:24:07 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	result = malloc(sizeof(int) * i);
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	j = 0;
	while (max > min)
	{
		result[j] = min;
		min++;
		j++;
	}
	return (j);
}
/*
#include<stdio.h>
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);


		printf("%d ", size);
		

}
*/
