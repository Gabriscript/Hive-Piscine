/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:27:24 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/13 11:56:39 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
int main() {
    char str[] = "  -123abc456";
    int num = ft_atoi(str);

    printf("The integer value is: %d\n", num);
    return 0;
}*/
