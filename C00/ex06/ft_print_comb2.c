/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:21:55 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/07 11:32:18 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int x, int y)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = x / 10 + '0';
	j = x % 10 + '0';
	k = y / 10 + '0';
	l = y % 10 + '0';
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			print(x, y);
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
