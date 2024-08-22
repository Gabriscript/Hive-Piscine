/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:50:45 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/18 10:24:31 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*result;

	if (min >= max)
		return (NULL);
	i = max - min;
	result = (int *)malloc(sizeof(int) * i);
	if (result == NULL)
		return (NULL);
	j = 0;
	while (max > min)
	{
		result[j] = min;
		min++;
		j++;
	}
	return (result);
}
/*#include <stdio.h>

int main(void)
{
    int min = 3;
    int max = 8;
    int *range = ft_range(min, max);

    if (range != NULL)
    {
        for (int i = 0; i < (max - min); i++)
        {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range);
    	}
    else
    {
        printf("ft_range returned NULL\n");
    }

    return 0;
}*/
