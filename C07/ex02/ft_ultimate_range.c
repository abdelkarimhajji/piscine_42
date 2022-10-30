/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:47:46 by ahajji            #+#    #+#             */
/*   Updated: 2022/06/01 21:22:32 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		ft;
	int		i;

	i = 0;
	ft = max - min;
	tab = malloc(ft * sizeof(int));
	if (min >= max)
	{
		tab = 0;
		*range = tab;
		return (0);
	}
	if (!tab)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (ft);
}
