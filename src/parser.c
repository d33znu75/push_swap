/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:42:39 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/26 17:39:49 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digit_sign(char *str)
{
	int	diff;

	diff = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str == '-' || *str == '+')
		{
			str++;
		}
		else if (*str < '0' || *str > '9')
		{
			diff++;
			str++;
		}
		while ((*str >= '0' && *str <= '9') || *str == ' ')
			str++;
	}
	if (diff > 0)
		return (0);
	return (1);
}

void	error_check(char *str, long *list)
{
	if (check_digit_sign(str) == 0 || str[0] == '\0')
	{
		free(list);
		write(1, "Error\n", 6);
		exit(1);
	}
	if (check_after_sign(str) == 1)
	{
		free(list);
		write(1, "Error\n", 6);
		exit(1);
	}
	if (count_num(str) == 0)
	{
		free(list);
		write(1, "Error\n", 6);
		exit(1);
	}
}

void	error_check2(long *list, int count)
{
	if (check_double(list, count) == 1)
	{
		free(list);
		write(1, "Error\n", 6);
		exit(1);
	}
	if (check_min_max(list, count) == 1)
	{
		free(list);
		write(1, "Error\n", 6);
		exit(1);
	}
}

void	list_fill(int argc, char *argv[], long *list, int count)
{
	int		i;
	int		j;
	char	**splitted;

	i = 1;
	j = 0;
	while (i < argc)
	{
		error_check(argv[i], list);
		splitted = ft_split(argv[i], ' ');
		while (*splitted)
		{
			list[j] = ft_atoi(*splitted);
			splitted++;
			j++;
		}
		i++;
	}
	list[count] = '\0';
}

long	*parser(int argc, char *argv[])
{
	int		i;
	long	*list;
	int		count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		count += count_num(argv[i]);
		i++;
	}
	list = (long *)malloc((count) * sizeof(long));
	list_fill(argc, argv, list, count);
	error_check2(list, count);
	return (list);
}
