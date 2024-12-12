/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradouan <mradouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:27:28 by mradouan          #+#    #+#             */
/*   Updated: 2024/08/12 20:47:41 by mradouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *u)
{
	int		i;

	i = 0;
	while (u[i])
		i++;
	return (i);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int		total_length;
	int		i;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	total_length += (size - 1) * ft_strlen(sep);
	return (total_length);
}

void	append_string(char *result, char *str, int *k)
{
	int		j;

	j = 0;
	while (str[j])
	{
		result[*k] = str[j];
		(*k)++;
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	char	*result;
	int		i;
	int		k;

	if (size == 0)
		return ((char *)malloc(1));
	total_length = calculate_total_length(size, strs, sep);
	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		append_string(result, strs[i], &k);
		if (i < size - 1)
			append_string(result, sep, &k);
		i++;
	}
	result[k] = '\0';
	return (result);
}
/*int main()
{
	int size = 5;
	char *strs[] = {"ahmed", "chAT", "GPT", "FRBKNI"};
	char seperator[] = ", ";
	char *result = ft_strjoin(3, strs, seperator);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
}*/
