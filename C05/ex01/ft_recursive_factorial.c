/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:53:42 by mradouan          #+#    #+#             */
/*   Updated: 2024/08/10 11:54:42 by mradouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int		i;

	i = 1;
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
