/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:54:54 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/22 13:41:09 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	k;

	k = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
/*int main()
{
	char y[]= "karim";
	char o[]= "osama";
	
	ft_strcat(y,o);
	printf("%s",y);
}*/
