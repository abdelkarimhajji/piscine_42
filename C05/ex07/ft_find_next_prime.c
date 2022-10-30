/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:27:42 by ahajji            #+#    #+#             */
/*   Updated: 2022/06/01 00:09:19 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb += 1;
			i = 2;
		}
		i++;
	}
	return (nb);
}
/*int main()
{
	printf("%d",ft_find_next_prime(8));
}*/
