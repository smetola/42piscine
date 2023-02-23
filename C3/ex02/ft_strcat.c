/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:08:05 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/20 12:55:52 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
	while (src[i])
	{
		dest[i + l] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char src[] = " qué tal";
	char dest[5] = "Hola";

	ft_strcat(&dest[0], &src[0]);
	printf("%s", dest);
} */