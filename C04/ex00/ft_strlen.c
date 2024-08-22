/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:33:21 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/12 11:43:16 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*int main() {
    char s1[] = "Hivestudent";
    int p;

    p = ft_stren(s1);

   printf("The length of the string is: %d\n",p);

    return 0;
}*/
