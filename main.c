/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:48:11 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/23 21:16:32 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// //-----> PARSING MAIN <-----//
// int	main(int argc, char *argv[])
// {
// 	long	*list;
// 	int		c;
// 	int		i;

// 	c = 0;
// 	i = 1;
// 	while (i < argc)
// 	{
// 		c += count_num(argv[i]);
// 		i++;
// 	}
// 	list = parser(argc, argv);
// 	i = 0;
// 	while (i < c)
// 	{
// 		printf("list[%d] = %ld\n", i, list[i]);
// 		i++;
// 	}
// }

//-----> OPERATIONS MAIN <-----//
// int main() 
// {
// 	long list_a[] = {1,2,3};
// 	long list_b[] = {0};
// 	int len_a = 3;
// 	int len_b = 1;
// 	int i = 0;

// 	printf("initial state:\n");
// 	printf("List A: ");
// 	i = 0;
// 	while (i < len_a) 
// 	{
// 		printf("%ld ", list_a[i]);
// 		i++;
// 	}
// 	printf("\nList B: ");
// 	i = 0;
// 	while (i < len_b) 
// 	{
// 		printf("%ld ", list_b[i]);
// 		i++;
// 	}
// 	printf("\n\n");
// 	// Test operations
// 	// rra(list_a, len_a);
// 	// rrb(list_b, len_b);
// 	// ss(list_a, list_b, len_a, len_b);
// 	pa(list_a, list_b, &len_a, &len_b);
// 	printf("after operation:\n");
// 	printf("List A: ");
// 	i = 0;
// 	while (i < len_a) 
// 	{
// 		printf("%ld ", list_a[i]);
// 		i++;
// 	}
// 	printf("\nList B: ");
// 	i = 0;
// 	while (i < len_b)
// 	{
// 		printf("%ld ", list_b[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }

void	print_stack(t_stack s)
{
	int j = 0;
	while (j < s.len)
	{
		printf("stack_a->list[%d] = %ld\n",j , s.list[j]);
		j++;
	}
}


int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	int count = count_total(argc,argv);
	a.list = parser(argc,argv);
	b.list = malloc(sizeof(long) * (a.len + 1));
	a.len = count;
	if (is_sorted(a))
		return (0);
	if (a.len == 2)
		sa(&a);
	else if (a.len == 3)
		three_sort(a);
	else
		_sort(a, b);
	// printf("************\n");
	// print_stack(a);
}
