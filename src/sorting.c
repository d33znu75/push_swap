/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:07 by rhmimchi          #+#    #+#             */
/*   Updated: 2024/01/03 22:14:24 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack a)
{
	int	i;

	i = 0;
	while (i < a.len - 1)
	{
		if (a.list[i] > a.list[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	three_sort(t_stack a)
{
	if (a.list[2] > a.list[0] && a.list[2] > a.list[1])
		sa(&a);
	else if (a.list[0] > a.list[1] && a.list[0] > a.list[2])
		ra(&a);
	else if (a.list[1] > a.list[0] && a.list[1] > a.list[2])
		rra(&a);
	if (!is_sorted(a))
		sa(&a);
}

void	five_sort(t_stack a, t_stack b)
{
	long	min_a;

	min_a = find_min(&a);
	while (a.len - 3)
	{
		min_a = find_min(&a);
		while (get_index(&a, min_a) > a.len / 2)
			rra(&a);
		while (get_index(&a, min_a) != 0)
			ra(&a);
		pb(&a, &b);
	}
	three_sort(a);
	while (b.len)
		pa(&a, &b);
}

void	b_sort(t_stack a, t_stack b)
{
	long	max_b;

	max_b = find_max(&b);
	while (b.len)
	{
		max_b = find_max(&b);
		while (get_index(&b, max_b) != 0)
		{
			if (get_index(&b, max_b) > b.len / 2)
				rrb(&b);
			else
				rb(&b);
		}
		pa(&a, &b);
	}
}
