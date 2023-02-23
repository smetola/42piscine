/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:54:38 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/10 15:16:48 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int a;
    int b;
    int div;
    int mod;

    a = 5;
    b = 2;
    ft_div_mod(a, b, &div, &mod);
    printf("Resultado: %d, resto: %d", div, mod);
} 