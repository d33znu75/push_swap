/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:48:11 by rhmimchi          #+#    #+#             */
/*   Updated: 2024/01/03 22:13:47 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;
	int		count;

	count = count_total(argc, argv);
	a.list = parser(argc, argv, count);
	b.list = (long *)malloc(sizeof(long) * (a.len + 1));
	if (b.list == NULL)
		return (0);
	a.len = count;
	b.len = 0;
	if (is_sorted(a))
		return (0);
	if (a.len == 2)
		sa(&a);
	else if (a.len == 3)
		three_sort(a);
	else if (a.len > 3 && a.len <= 10)
		five_sort(a, b);
	else if (a.len > 10 && a.len < 300)
		chunks_5(a, b);
	else
		chunks_11(a, b);
}
