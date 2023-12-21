/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:42:39 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/21 19:40:43 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int parser(char *str)
{
	int sign_count = 0;
	int diff = 0;
	while (*str)
	{
        while (*str == ' ')
            str++;
		if (*str == '-' || *str == '+')
		{
			sign_count++;
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
	if (sign_count > 1 || diff > 0)
		return (0);
	return (1);
}

int count_num(char *str)
{
	int count = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			count++;
			while (*str >= '0' && *str <= '9')
			{
				str++;
			}
		}
		else
			str++;
	}
	return (count);
}

int check_space(char *str)
{
	int count = 0;
	while (*str)
	{
		if (*str == ' ')
			return (1);
		str++;
	}
	return (0);
}

int check_double(int *list, int size)
{
    int i = 0;
    int j;
    while (i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            if (list[i] == list[j])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}
int check_after_sign(char *str)
{
    while (*str)
    {
        if (*str == '-' || *str == '+')
        {
            if (*(str + 1) < '0' || *(str + 1) > '9')
                return (1);
        }
        str++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int *list;
	int count = 0;
	char **splitted;

	while (i < argc)
	{
		count += count_num(argv[i]);
		i++;
	}
	//printf("num count: %d\n", count);
	list = (int *)malloc((count) * sizeof(int));
	
	i = 1;
	while (i < argc)
	{
		if (parser(argv[i]) == 0 || argv[i][0] == '\0')
		{
			write(1, "Error\n", 6);
			return (1);
		}
        if (check_after_sign(argv[i]) == 1)
        {
            write(1, "Error\n", 6);
            return (1);
        }
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
    if (check_double(list, count) == 1)
    {
        write(1, "Error\n", 6);
        return (1);
    }
	j = 0;
	int s = 0;
	while(s < count)
	{
		printf("list[%d] = %d\n", s, list[j]);
		j++;
		s++;
	}
	free(list);
}