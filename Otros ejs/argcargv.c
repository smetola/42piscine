/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argcargv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:27:20 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/23 19:35:20 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[]) //hola que tal
{
    int word; 
    int letter; 

    word = 1; //hola
    while (argv[word] && argc) //frase -> palabras
    {
        letter = 0;  //h
        while (argv[word][letter]) //palabra -> letras
        {
            write(1, &argv[word][letter], 1);
            letter++;
        }
        write(1, " ", 1);
        word++;
    }
}