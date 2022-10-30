/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:13:26 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/14 20:34:24 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < size)
	{
		j = i;
		while (j < size - 1)
		{
			if (tab[i] > tab[j + 1])
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
	}
}
