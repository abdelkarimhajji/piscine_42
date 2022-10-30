/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:56:36 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/19 21:30:57 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
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
	char t[] = "";
	int k;
	k = 9;
	k = ft_str_is_numeric(t);
	printf("%d", k);
}*/
