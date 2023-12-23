/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:57:29 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/23 14:48:07 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int	i;

	i = a->len;
	if (b->len < 1)
		return ;
	while (i > 0)
	{
		a->list[i] = a->list[i - 1];
		i--;
	}
	a->list[0] = b->list[0];
	i = 0;
	while (i < b->len - 1)
	{
		b->list[i] = b->list[i + 1];
		i++;
	}
	b->list[i] = 0;
	(a->len)++;
	(b->len)--;
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	int	i;

	i = b->len;
	if (a->len < 1)
		return ;
	while (i > 0)
	{
		b->list[i] = b->list[i - 1];
		i--;
	}
	b->list[0] = a->list[0];
	i = 0;
	while (i < a->len - 1)
	{
		a->list[i] = a->list[i + 1];
		i++;
	}
	a->list[i] = 0;
	(a->len)--;
	(b->len)++;
	write(1, "pb\n", 3);
}
