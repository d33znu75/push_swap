/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:48:11 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/26 17:40:34 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/push_swap.h"
#include <stdio.h>

void	print_stack(t_stack s)
{
	int	j;

	j = 0;
	while (j < s.len)
	{
		printf("stack_a->list[%d] = %ld\n", j, s.list[j]);
		j++;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;
	int		count;

	count = count_total(argc, argv);
	a.list = parser(argc, argv);
	b.list = (long *)malloc(sizeof(long) * (a.len + 1));
	if (b.list == NULL)
		return (0);
	a.len = count;
	if (is_sorted(a))
		return (0);
	if (a.len == 2)
		sa(&a);
	else if (a.len == 3)
		three_sort(a);
	else if (a.len > 3 && a.len < 500)
		chunks_5(a, b);
	else
		chunks_11(a, b);
}

// printf("------------\n");
// print_stack(a);
// free(a.list);
// free(b.list);
// system("leaks push_swap");
