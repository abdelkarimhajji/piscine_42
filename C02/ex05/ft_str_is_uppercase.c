/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:55:24 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/21 12:54:56 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
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

/*int main()
{
	char k[] = "";
	int i;
	i = 5;
	i = ft_str_is_uppercase(k);
	printf("%d", i);
}*/
