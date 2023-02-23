/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:52:36 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/20 12:52:32 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2 [i])
			return (-1);
		if (s1[i] > s2 [i])
			return (1);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char s1[] = "hola";
	char s2[] = "hoz";
	int equal;

	equal = ft_strcmp(&s1[0], &s2[0]);
	printf("%d", equal);
	return 0;
} */