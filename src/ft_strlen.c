/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:52:20 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/26 17:39:18 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	count_total(int argc, char *argv[])
{
	int		c;
	int		i;

	c = 0;
	i = 1;
	while (i < argc)
	{
		c += count_num(argv[i]);
		i++;
	}
	return (c);
}
