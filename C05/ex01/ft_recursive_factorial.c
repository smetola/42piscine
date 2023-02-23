/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:16:53 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/23 14:47:58 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb == 0 || nb == 1)
		return (1);
	return (res * ft_recursive_factorial(--nb));
}

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d", ft_recursive_factorial(nb));
}
