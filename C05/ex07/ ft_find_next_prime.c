/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_find_next_prime.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 12:21:18 by mradouan          #+#    #+#             */
/*   Updated: 2024/08/10 17:49:59 by mradouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		i;
	int		prim;

	i = 2;
	prim = 1;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int		i;

	i = nb;
	if (i == 0 || i == 1)
	{
		return (0);
	}
	while (i >= nb)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (i);
}

