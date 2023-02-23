/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practicaargcargv.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:05:59 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/22 17:08:54 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] && argc)
	{
		j = 0;
		while (argv[i][j])
		{	
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
	}
}