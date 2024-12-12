/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:44:44 by mradouan          #+#    #+#             */
/*   Updated: 2024/08/04 17:23:01 by mradouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		dest0;
	unsigned int		src0;
	unsigned int		i;

	dest0 = ft_len(dest);
	src0 = ft_len(src);
	if (size == 0)
	{
		return (src0);
	}
	if (size <= dest0)
	{
		return (src0 + size);
	}
	i = 0;
	while (src[i] != '\0' && i < (size - dest0 - 1))
	{
		dest[dest0 + i] = src[i];
		i++;
	}
	dest[dest0 + i] = '\0';
	return (dest0 + src0);
}
