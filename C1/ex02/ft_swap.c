/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:20:54 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/14 11:08:35 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a;
    int b;

    a = 1;
    b = 2;
    /* int *ptr1;
    int *ptr2;
    ptr1 = &a;
    ptr2 = &b; */

    printf("a=%d b=%d\n", a, b);
    ft_swap(&a, &b);
    printf("a=%d b=%d", a, b);
}