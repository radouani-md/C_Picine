/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:04:15 by mradouan          #+#    #+#             */
/*   Updated: 2024/07/31 12:28:09 by mradouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i++] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122)
			&& !(str[i - 1] >= 65 && str[i - 1] <= 90)
			&& !(str[i - 1] >= 97 && str[i - 1] <= 122)
			&& !(str[i - 1] >= 48 && str[i - 1] <= 57))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
