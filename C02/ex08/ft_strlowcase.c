/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@studend.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:49:11 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/07 18:06:31 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 90 && str[i] >= 65)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
 int main() {
         
     char one[] ="Hello World";
       
     
  printf("The output is : %s\n", one);
  ft_strlowcase(one);
  printf("translated is : %s\n", one);
 }*/
