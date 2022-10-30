/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:48:39 by ahajji            #+#    #+#             */
/*   Updated: 2022/06/02 20:35:48 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*intg;
	int		i;

	i = 0;
	if (min >= max)
	{
		intg = 0;
		return (intg);
	}
	intg = malloc ((max - min) * sizeof(int));
	while (min < max)
	{
		intg[i] = min;
		min++;
		i++;
	}
	return (intg);
}
/*#include <stdio.h>
int main()
{
	int i = 0;
	int min = 900;
	int max = 600;
	int *f = ft_range(min,max);
	while(i < max - min)
	{
		printf("%d\n ",f[i]);
		i++;
	}
}*/
