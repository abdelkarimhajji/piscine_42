/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:01:05 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/12 16:26:09 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(char nu1, char nu2, char nu3)
{
	ft_putchar(nu1);
	ft_putchar(nu2);
	ft_putchar(nu3);
	if (nu1 < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	nu1;
	char	nu2;
	char	nu3;

	nu1 = '0';
	while (nu1 <= '7')
	{
		nu2 = nu1 + 1;
		while (nu2 <= '8')
		{
			nu3 = nu2 + 1;
			while (nu3 <= '9')
			{
				print_numbers(nu1, nu2, nu3);
				nu3++;
			}
			nu2++;
		}
		nu1++;
	}
}
