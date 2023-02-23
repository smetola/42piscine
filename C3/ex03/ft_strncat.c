/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:58:07 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/20 13:06:46 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
	while (src[i] && i < nb)
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
	int nb;

	nb = 3;
	ft_strncat(&dest[0], &src[0], nb);
	printf("%s", dest);
} */