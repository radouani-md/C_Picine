/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:51:19 by mradouan          #+#    #+#             */
/*   Updated: 2024/08/11 13:10:21 by mradouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*gg;

	size = str_len(src);
	gg = (char *)malloc((size + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		gg[i] = src[i];
		i++;
	}
	gg[i] = '\0';
	return (gg);
}
/*#include <stdio.h>
int main()
{
    char str[] = "mohammed";
    char *word= ft_strdup(str);
    int i = 0;
    printf("nb : %s \n",word);
    
}*/
