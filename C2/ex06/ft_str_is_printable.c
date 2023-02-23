/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:58:03 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/17 11:10:28 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

/* int	main(void)
{
	char str[] = "asdf";
	printf("%d",ft_str_is_printable(&str[0]));
	char rts = 31;
	printf("\n%d",ft_str_is_printable(&rts));
} */