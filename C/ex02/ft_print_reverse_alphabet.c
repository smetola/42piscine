/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:06:37 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/07 12:23:40 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>

 void ft_print_reverse_alphabet(void){
    char x;
    x = 'z';
    while (x >= 'a'){
        write(1, &x, 1);
        x--;
    }
 }
 
 int main (){
    ft_print_reverse_alphabet();
 }