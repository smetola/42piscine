/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:07:55 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/20 17:34:49 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
int	main(void)
{
	char 	str[] = "Hola Mundo";
	char	to_find[] = "";
	char 	*result;
	
	result = ft_strstr(str, to_find);
	printf("%s", result);
}
