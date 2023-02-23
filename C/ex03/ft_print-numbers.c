/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print-numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:20:03 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/10 11:48:22 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void){
    //int n;
    char c;
    c = '0';
    while (c <= '9')
    {
        //c = n + '0';
        write(1, &c, 1);
        c++;
    }
}

int main (){
    ft_print_numbers();
}
