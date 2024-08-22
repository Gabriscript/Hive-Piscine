/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:55:13 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/21 15:14:29 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str, int size)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stocks;
	int			i;

	stocks = malloc(sizeof(t_stock_str) * (ac + 1));
	if (stocks == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stocks[i].size = ft_strlen(av[i]);
		stocks[i].str = av[i];
		stocks[i].copy = ft_strcpy(av[i], stocks[i].size);
		i++;
	}
	stocks[i].size = 0;
	stocks[i].str = 0;
	stocks[i].copy = 0;
	return (stocks);
}
