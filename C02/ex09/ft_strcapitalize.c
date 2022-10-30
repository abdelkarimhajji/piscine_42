/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:13:09 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/19 22:13:20 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		else if (str[i] == 32 && str[i + 1] >= 97 && str[i + 1] <= 122)
		{
			str[i + 1] -= 32;
		}
		else if (!((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91)
				|| (str[i] <= 57 && str[i] >= 48)))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*int	main(void)
  {
  char kk[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+hT+un";


  ft_strcapitalize(kk);
  printf("%s", kk);
  return (0);
  }*/
