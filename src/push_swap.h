/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:49:05 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/27 18:39:41 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	long	*list;
	int		len;
}	t_stack;

//-----> chunks <-----//
long	get_next_min(t_stack *a, long min);
void	b_sort(t_stack a, t_stack b);
void	indexing_numbers(t_stack *a);
void	chunks_5(t_stack a, t_stack b);
void	chunks_11(t_stack a, t_stack b);

//-----> libft <-----//
long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);

//-----> checkers <-----//
int		check_min_max(long *list, int size);
int		check_after_sign(char *str);
int		check_double(long *list, int size);
int		check_space(char *str);
void	error_check(char *str, long *list);
void	error_check2(long *list, int count);
int		check_digit_sign(char *str);

//-----> counters <-----//
long	count_num(char *str);
int		count_total(int argc, char *argv[]);

//-----> parsing <-----//
long	*parser(int argc, char *argv[]);
void	list_fill(int argc, char *argv[], long *list);
void	free_splitted(char **splitted);

//-----> operations <-----//
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

//-----> stack <-----//
long	find_min(t_stack *a);
long	find_max(t_stack *a);
long	get_index(t_stack *t, long num);

//-----> sorting <-----//
void	three_sort(t_stack a);
int		is_sorted(t_stack a);
void	_sort(t_stack a, t_stack b);

#endif