/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:14:28 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/21 12:43:51 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{	
	int	k;
	int	i;

	k = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 96 && str[i] < 123) || (str[i] < 91 && str[i] > 64)))
		{
			return (0);
		}
		i++;
	}
	if (i == 0)
	{
		return (1);
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	char sr[100]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY/Z";
	int k;

	k = ft_str_is_alpha(sr);
	printf("%d",k);


}*/
