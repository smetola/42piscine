/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:24:17 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/16 18:44:28 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*low;

	low = str;
	while (*low)
	{
		if (*low >= 'A' && *low <= 'Z')
			*low = *low + 32;
		low++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "Hola";
	printf("%s", ft_strlowcase(&str[0]));
} */