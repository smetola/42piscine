/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_space.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:47:18 by sanmetol          #+#    #+#             */
/*   Updated: 2023/02/16 14:59:47 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_3space(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		if (str[i + 1] != '\0')
			write(1, "---", 3);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int i;

	i = 1;
	while(argv[i])
	{
		char *str = argv[i];
		ft_3space(&str[0]);
		write(1, "\n", 1);
		i++;
	}
}