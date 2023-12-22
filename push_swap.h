/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:49:05 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/22 21:32:42 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
int		check_min_max(long *list, int size);
int		check_after_sign(char *str);
int		check_double(long *list, int size);
int		check_space(char *str);
long	count_num(char *str);
long	*parser(int argc, char *argv[]);

#endif