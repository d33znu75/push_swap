/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:48:23 by rhmimchi          #+#    #+#             */
/*   Updated: 2024/01/04 21:47:25 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	int	ft_at(const char *str, long int i, long int num, long int num2)
{
	long int	nega;

	nega = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nega *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num2 = (num * 10) + (int)(str[i] - 48);
		if ((num2 * nega) > INT_MAX || (num2 * nega) < INT_MIN)
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		num = num2;
		i++;
	}
	num *= nega;
	return (num);
}

long	ft_atoi(const char *str)
{
	long int	i;
	long int	num;
	long int	num2;

	i = 0;
	num2 = 0;
	num = 0;
	return (ft_at(str, i, num, num2));
}
