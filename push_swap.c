/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:48:11 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/30 16:26:19 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/push_swap.h"
#include <stdio.h>

// void	print_stack(t_stack s)
// {
// 	int	j;

// 	j = 0;
// 	while (j < s.len)
// 	{
// 		printf("stack_a->list[%d] = %ld\n", j, s.list[j]);
// 		j++;
// 	}
// }

void	chunks_1(t_stack a, t_stack b)
{
	int	i;
	int	j;

	i = 0;
	j = a.len;
	_indexing_numbers(&a);
	while (i <= j)
	{
		while (find_min(&a) < i && a.len)
		{
			if (a.list[0] >= 0 && a.list[0] < i)
				pb(&a, &b);
			else if (a.list[0] >= i + j / 1 && a.list[0] < i + j * 2 / 1)
			{
				pb(&a, &b);
				rb(&b);
			}
			else
				ra(&a);
		}
		i += j / 1;
	}
	while (a.len)
		pb(&a, &b);
	b_sort(a, b);
}

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;
	int		count;

	count = count_total(argc, argv);
	a.list = parser(argc, argv);
	b.list = (long *)malloc(sizeof(long) * (a.len + 1));
	b.len = 0;
	if (b.list == NULL)
		return (0);
	a.len = count;
	if (is_sorted(a))
		return (0);
	if (a.len == 2)
		sa(&a);
	else if (a.len == 3)
		three_sort(a);
	else if (a.len > 3 && a.len <= 7)
		chunks_1(a, b);
	else if (a.len > 7 && a.len < 300)
		chunks_5(a, b);
	else
		chunks_11(a, b);
}

// printf("------------\n");
// print_stack(a);
// free(a.list);
// free(b.list);
// system("leaks push_swap");
//  make re && make clean && clear && ./push_swap 9 8 7 6 5 4 3 2 1 77 88
//  9 -8 7 6 -5 4 3 2 1 77 88 -10