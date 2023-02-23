/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:05:26 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/07 13:14:56 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void){
    char l;
    l = 'a';
    while (l <= 'z') 
    {
     write(1, &l, 1);
     l++;
    }
}
int main(){
    ft_print_alphabet();
}