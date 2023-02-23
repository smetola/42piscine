/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:17:36 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/17 11:10:32 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z')
			&& (*str < 'a' || *str > 'z'))
			return (0);
		str++;
	}
	return (1);
}
/* int	main(void)
{
	char str[] = "5";
	printf ("%d", ft_str_is_alpha(&str[0]));
} */