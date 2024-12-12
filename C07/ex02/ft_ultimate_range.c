/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradouan <mradouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:09:32 by mradouan          #+#    #+#             */
/*   Updated: 2024/08/12 18:19:20 by mradouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*array;
	int		size;
	int		i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (!array)
		return (-1);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (size);
}
/*#include <stdio.h>
int main(){
    int i = 0;
    int *range;
    int size = ft_ultimate_range(&range,2,4);
    if ( size > 0)
    {
        while(i < size)
        {
            printf(" s: %d \n",range[i]);
            i++;
        }
    }

    return 0;
}*/
