/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:29:11 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/23 16:13:57 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	fin;

	fin = 0;
	i = 0;
	n = 1;
	while (str[i] != '\0' && str[i] <= 32)
		i++;
	while ((str[i] != '\0' && str[i] == '-') || str[i] == '+')
	{
		if (str[i] == '-')
		{
			n *= -1;
		}
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		fin = fin * 10 + str[i] - 48;
		i++;
	}
	fin *= n;
	return (fin);
}

/*int	main()
{
	int r;
	char y[]="   ---+146a58";
	r = ft_atoi(y);
	printf("%d",r);
}*/
