/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:16:41 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/29 21:35:26 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	if (argc > 1)
	{
		i = 1;
		j = 0;
		k = argc - 1;
		while (argc > i)
		{
			j = 0;
			while (argv[k][j] != '\0')
			{
				write(1, &argv[k][j], 1);
				j++;
			}
			write(1, "\n", 1);
			k--;
			i++;
		}
	}
	return (0);
}
