/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:36:44 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/03 18:35:58 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	support_func(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Illegal input: x and y have to be > 0 ", 40);
	}
	support_func(x, y);
}

void	support_func(int x, int y)
{
	int	xl;
	int	yl;

	xl = 0;
	yl = 1;
	while (yl <= y)
	{
		xl++;
		if (xl > x)
		{
			ft_putchar('\n');
			xl = 0;
			yl++;
		}
		else if (xl == 1 && yl == 1 || xl == x && yl == y && x != 1 && y != 1)
			ft_putchar('/');
		else if (xl == x && yl == 1 || xl == 1 && yl == y)
			ft_putchar('\\');
		else if (xl == x || yl == y || xl == 1 || yl == 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}
