/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:15:46 by ggargani          #+#    #+#             */
/*   Updated: 2024/08/12 11:07:40 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*int main() {
    char s1[] = "Hivestudent";
    char s2[] = "o";
    char *p;

    p = ft_strstr(s1, s2);

    if (p) {
        printf("Found '%s' in '%s' is '%s'\n", s2, s1, p);
    } else {
        printf("String '%s' not found in '%s'\n", s2, s1);
    }

    return 0;
}*/
