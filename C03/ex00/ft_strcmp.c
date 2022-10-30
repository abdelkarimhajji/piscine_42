/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:13:54 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/22 14:18:42 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	k;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			k = s1[i] - s2[i];
			return (k);
		}
		i++;
	}
	return (0);
}
/*int main()
{
	int k = 5;
	char h[]= "karim";
	char l[]= "karim";

	k = ft_strcmp(h,l);
	printf("%d", k);
}*/
