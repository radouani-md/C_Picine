/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradouan <mradouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:49:02 by mradouan          #+#    #+#             */
/*   Updated: 2024/08/12 18:53:56 by mradouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		i;
	int		len;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	arr = (int *)malloc((len) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
