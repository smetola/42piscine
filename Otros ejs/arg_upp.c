/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_upp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:55:16 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/22 13:22:53 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	arg_upp(char *argv)
{
	int	i;

	i = 0;
 	
	{
		while (argv[i])
		{
			if (argv[i] >= 'a' && argv[i] <= 'z')
			{
				argv[i] = argv[i] - 32;
			}
			write(1, &argv[i], 1);
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			arg_upp(argv[i]);
			if (argv[i + 1] != '\0')
				write (1, " ", 1);
			else
				write(1, "\n", 1);
			i++;
		}
	}
}