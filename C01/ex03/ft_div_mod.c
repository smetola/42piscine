/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:23:01 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/13 14:23:44 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include    <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
    int a;
    int b;
    int div;
    int mod;

    a = 5;
    b = 2;
    ft_div_mod(a, b, &div, &mod);
    printf("Resultado: %d, resto: %d", div, mod);
}*/
