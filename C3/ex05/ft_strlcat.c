/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:32:04 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/20 18:32:54 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sl;
	unsigned int	dl;

	i = 0;
	j = 0;
	sl = 0;
	dl = 0;
	while (dest[dl] && dl < size)
		dl++;
	while (src[sl])
		sl++;
	if (dl < size)
	{
		while (i < size - dl - 1 && src[j])
		{
			dest[dl + i] = src[j];
			i++;
			j++;
		}
		dest[dl + i] = '\0';
	}
	printf("%s\n", dest);
	return (dl + sl);
}

/* int	main(void)
{
	char	src[] = " qué tal";
	char	dest[] = "Hola";
	int		size;

	size = 14;
	printf("%d", ft_strlcat(&dest[0], &src[0], size));
} */
