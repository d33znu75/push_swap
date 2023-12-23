/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:55:59 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/23 14:43:04 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}

void	rra(t_stack *a)
{
	int		i;
	long	tmp;

	if (a->len < 2)
		return ;
	i = a->len - 1;
	tmp = a->list[a->len - 1];
	while (i > 0)
	{
		a->list[i] = a->list[i - 1];
		i--;
	}
	a->list[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	int		i;
	long	tmp;

	if (b->len < 2)
		return ;
	i = b->len - 1;
	tmp = b->list[b->len - 1];
	while (i > 0)
	{
		b->list[i] = b->list[i - 1];
		i--;
	}
	b->list[0] = tmp;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
