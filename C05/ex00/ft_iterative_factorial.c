/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:16:51 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/31 22:58:52 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	t;

	t = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		t = t * i;
		i++;
	}
	return (t);
}
/*int main()
{
	printf("%d", ft_iterative_factorial(0));
}*/
