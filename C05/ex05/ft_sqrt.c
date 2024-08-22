/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:57:37 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/13 17:19:47 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int main() {

    printf("%d\n",ft_sqrt(8));
    printf("%d\n",ft_sqrt(0));
    printf("%d\n",ft_sqrt(-6));
    printf("%d\n",ft_sqrt(9));
    printf("%d\n",ft_sqrt(16));
    printf("%d\n",ft_sqrt(4));

    return 0;
}*/
