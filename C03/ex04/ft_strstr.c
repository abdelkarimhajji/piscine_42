/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:48:37 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/22 21:59:28 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	returnl(char *str, char *to_find)
{
	int	len;
	int	i;

	len = ft_strlen(to_find);
	i = 0;
	while (str[i] == to_find[i] && i < len)
	{
		i++;
	}
	return (len == i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (returnl(&str[i], to_find))
			{
				return (&str[i]);
			}		
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	char t[] = "mljtokdtgmemesd558gkerfghfth(*&&^&^6990ggggggw";
	char f[] = "55";
	char *h;

	h = ft_strstr(t,f);
	printf("%s", ft_strstr(t,f));
}*/
