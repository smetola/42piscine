/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:57:06 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/13 15:00:46 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swp;

	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i +1])
			{
				swp = tab[i];
				tab[i] = tab[i +1];
				tab[i +1] = swp;
			}
			i++;
		}
		j++;
	}
}
/*int main(void)
{
	int tab[] = {1, 3, 2, 8, 7, 5, 6, 9, 4};
    int size = 9;

    ft_sort_int_tab(tab, size);
	
    for (int i = 0; i < size; i++) {
        printf("%d", tab[i]);
    }
}*/
