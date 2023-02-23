/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:27:42 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/23 18:24:37 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat_alpha(char *argv)
{
	int	i;
	int l;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
			l = argv[i] - 96;
		if (argv[i] >= 'A' && argv[i] <= 'Z')
			l = argv[i] - 64;
		while (l > 0)
		{
			write(1, &argv[i], 1);
			l--;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	ft_repeat_alpha(argv[1]);
}