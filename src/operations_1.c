/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 10:50:16 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/23 14:41:36 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	long	tmp;

	if (a->len < 2)
		return ;
	tmp = a->list[0];
	a->list[0] = a->list[1];
	a->list[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	long	tmp;

	if (b->len < 2)
		return ;
	tmp = b->list[0];
	b->list[0] = b->list[1];
	b->list[1] = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}

void	ra(t_stack *a)
{
	int		i;
	long	tmp;

	if (a->len < 2)
		return ;
	i = 0;
	tmp = a->list[0];
	while (i < a->len - 1)
	{
		a->list[i] = a->list[i + 1];
		i++;
	}
	a->list[a->len - 1] = tmp;
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	int		i;
	long	tmp;

	if (b->len < 2)
		return ;
	i = 0;
	tmp = b->list[0];
	while (i < b->len - 1)
	{
		b->list[i] = b->list[i + 1];
		i++;
	}
	b->list[b->len - 1] = tmp;
	write(1, "rb\n", 3);
}
