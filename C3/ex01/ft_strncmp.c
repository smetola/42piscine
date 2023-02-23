/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:41:47 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/20 17:19:50 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
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
	char	s1[] = "holaa";
	char	s2[] = "milaz";
	int		equal;
	int		n;

	n = 3;
	equal = ft_strncmp(&s1[0], &s2[0], n);
	printf("%d", equal);
	return (0);
} */
