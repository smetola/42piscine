/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:11:11 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/09 17:24:01 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}
int main()
{
    int a;
    int b;

    a = 5;
    b = 2;
    ft_ultimate_div_mod(&a, &b);
    printf("\nResult: %d, Rest: %d", a, b);
}