/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:34:35 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/21 12:51:43 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 122 && str[i] >= 97))
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

/*int	main()
{
	int i;
	i = 5;
	char t[] =  "hhKh";
	i = ft_str_is_lowercase(t);
	printf("%d", i);
}*/
