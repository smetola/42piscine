/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:37:49 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/23 14:47:05 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = nb;
	while (nb > 1)
	{
		f = f * --nb;
	}
	return (f);
}

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d", ft_iterative_factorial(nb));
} 
