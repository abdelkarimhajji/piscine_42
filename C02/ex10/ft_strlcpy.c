/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:29:45 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/19 22:27:56 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	while (i < (size - 1) && src[i] != '\0' && 0 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (k);
}

/*int main()
{
	char t[] = "karim";

	char h[] = "";
	int k;
	k =  5;
	k = ft_strlcpy(h, t, 5);
	printf("%s\n",h);
	printf("%d", k);
}*/
