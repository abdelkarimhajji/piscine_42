/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:12:07 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/31 23:32:56 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	res;
	int	i;
	int	u;

	u = 0;
	res = 0;
	i = 0;
	if (nb <= 0)
		return (0);
	while (i <= nb && i <= 46340)
	{
		res = nb - (i * i);
		if (res == 0)
		{
			return (i);
		}
		else if (res < 0)
			return (0);
		i++;
	}
	return (u);
}
/*int main()
{
	printf("%d",ft_sqrt(2147395601));
}*/
