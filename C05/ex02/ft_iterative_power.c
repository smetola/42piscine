/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:53:58 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/23 18:35:38 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	i = 1;
	r = nb;
	if (nb == 0 && power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		r = r * nb;
		i++;
	}
	return (r);
}

/* int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 3;
	printf("%d", ft_iterative_power(nb, power));
} */
