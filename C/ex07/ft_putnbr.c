/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:24:40 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/20 11:02:14 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb){
    if (nb == -2147483648)
    {
        write (1, "-2147483648", 11);
        return;
    }
    
    if (nb < 0)
    {
        nb = nb - nb*2;
        write(1, "-", 1);
    }
    int x;
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    } else {
        x = nb + '0';
        write(1, &x, 1);
    }
       
}

int main ()
{
    ft_putnbr(570000);
    return 0;
}