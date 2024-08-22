/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:07:01 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/06 08:53:50 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
