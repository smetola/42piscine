/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:15:11 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/04 14:26:25 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	while (a <= y)
	{
		b = 1;
		while (b <= x)
		{
			if ((a == 1 && b == 1) || (a == y && b == x))
				ft_putchar('A');
			else if ((a == y && b == 1) || (a == 1 && b == x))
				ft_putchar('C');
			else if ((a == 1 && b <= x) || (a <= y && b == 1))
				ft_putchar('B');
			else if ((a == y && b <= x) || (a <= y && b == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
