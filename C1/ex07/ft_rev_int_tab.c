/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:03:58 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/13 17:37:23 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int f;
	int swp;

	i = 0;
	f = size;
	while (i < size/2)
	{
		swp = tab[i];
		tab[i++] = tab[--f];
		tab[f] = swp;
	}
}

int main(void) {
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 10;

    ft_rev_int_tab(tab, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
}