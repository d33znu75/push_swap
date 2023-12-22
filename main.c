/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:48:11 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/22 21:32:16 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	long	*list;
	int		c;
	int		i;

	c = 0;
	i = 1;
	while (i < argc)
	{
		c += count_num(argv[i]);
		i++;
	}
	list = parser(argc, argv);
	i = 0;
	while (i < c)
	{
		printf("list[%d] = %ld\n", i, list[i]);
		i++;
	}
}
