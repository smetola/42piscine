/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:06:12 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/13 15:53:27 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int main()
{
    int a;
    int b;

    a = 1;
    b = 2;
    int *ptr1;
    int *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    printf("a=%d b=%d\n", a, b);
    ft_swap(ptr1, ptr2);
    printf("a=%d b=%d", a, b);
}*/
