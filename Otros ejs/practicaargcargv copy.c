/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practicaargcargv copy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:05:59 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/22 17:16:40 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_argvii(char *argum)
{
	int	i;
	
	i = 0;
	while (argum[i])
	{
		write(1, &argum[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		ft_argvii(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}