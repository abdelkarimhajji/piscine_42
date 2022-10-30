/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:34:22 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/13 23:27:43 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int nb1, int nb2)
{
	ft_putchar((nb1 / 10) + 48);
	ft_putchar((nb1 % 10) + 48);
	ft_putchar(' ');
	ft_putchar((nb2 / 10) + 48);
	ft_putchar((nb2 % 10) + 48);
	if (nb1 < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			print_numbers(nb1, nb2);
			nb2++;
		}
		nb1++;
	}
}
