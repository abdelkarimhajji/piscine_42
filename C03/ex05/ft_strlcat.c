/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:34:21 by ahajji            #+#    #+#             */
/*   Updated: 2022/05/22 19:21:49 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlng(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_d;
	unsigned int	size_s;
	unsigned int	i;

	i = 0;
	size_d = ft_strlng(dest);
	size_s = ft_strlng(src);
	if (size == 0)
	{
		return (size_s);
	}
	else if (size <= size_d)
	{
		return (size + size_s);
	}
	while (size && src[i] && i < size - 1 - size_d)
	{
		dest[size_d + i] = src[i];
		i++;
	}
	dest [size_d + i] = '\0';
	return (size_d + size_s);
}
