/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:45:11 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/26 17:39:38 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	get_next_min(t_stack a, long min)
{
	int		i;
	long	next_min;

	i = 0;
	next_min = find_max(&a);
	while (i < a.len)
	{
		if (a.list[i] < next_min && a.list[i] > min)
			next_min = a.list[i];
		i++;
	}
	return (next_min);
}

void	indexing_numbers(t_stack *a)
{
	int		i;
	long	min;
	long	*temp;

	i = 0;
	min = find_min(a);
	*temp = (long *)malloc(sizeof(long) * a->len);
	if (temp == NULL)
		return ;
	while (i < a->len)
	{
		temp[get_index(*a, min)] = i;
		min = get_next_min(*a, min);
		i++;
	}
	i = 0;
	while (i < a->len)
	{
		a->list[i] = temp[i];
		i++;
	}
	free(temp);
}

void	chunks_5(t_stack a, t_stack b)
{
	int	i;
	int	j;

	i = 0;
	j = a.len;
	indexing_numbers(&a);
	while (i <= j)
	{
		while (find_min(&a) < i && a.len)
		{
			if (a.list[0] >= 0 && a.list[0] < i)
				pb(&a, &b);
			else if (a.list[0] >= i + j / 8 && a.list[0] < i + j * 2 / 8)
			{
				pb(&a, &b);
				rb(&b);
			}
			else
				ra(&a);
		}
		i += j / 8;
	}
	while (a.len)
		pb(&a, &b);
	b_sort(a, b);
}

void	chunks_11(t_stack a, t_stack b)
{
	int	i;
	int	j;

	i = 0;
	j = a.len;
	indexing_numbers(&a);
	while (i <= j)
	{
		while (find_min(&a) < i && a.len)
		{
			if (a.list[0] >= 0 && a.list[0] < i)
				pb(&a, &b);
			else if (a.list[0] >= i + j / 15 && a.list[0] < i + j * 2 / 15)
			{
				pb(&a, &b);
				rb(&b);
			}
			else
				ra(&a);
		}
		i += j / 15;
	}
	while (a.len)
		pb(&a, &b);
	b_sort(a, b);
}
