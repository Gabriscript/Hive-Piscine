/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:23:38 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/08 16:14:22 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
 int main() {
         
     char *one ="HGbvjhghghjnm";
    char *two = "HHHHHHHHHHhhhhhhhhhh";
     
     
  printf("The output is : %s\n",ft_strupcase(two));
   printf("The output is : %d\n",ft_strupcase(one));
 
    return 0;
 
}*/
