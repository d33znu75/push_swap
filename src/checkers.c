/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:11:54 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/28 15:37:24 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_space(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == ' ')
			return (1);
		str++;
	}
	return (0);
}

int	check_double(long *list, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (list[i] == list[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_after_sign(char *str)
{
	while (*str)
	{
		if (*str == '-' || *str == '+')
		{
			if (*(str + 1) < '0' || *(str + 1) > '9')
				return (1);
			if (*(str - 1) >= '0' && *(str - 1) <= '9')
				return (1);
		}
		str++;
	}
	return (0);
}

int	check_min_max(long *list, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (list[i] > INT_MAX || list[i] < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

long	count_num(char *str)
{
	long	count;

	count = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			count++;
			while (*str >= '0' && *str <= '9')
				str++;
		}
		else
			str++;
	}
	return (count);
}
