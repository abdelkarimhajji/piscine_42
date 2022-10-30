/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:10:27 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/19 21:55:13 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
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
	int i;
	i = 5;
	char k[] = "ka\n";

	i = ft_str_is_printable(k);
	printf("%d",i);
}*/
