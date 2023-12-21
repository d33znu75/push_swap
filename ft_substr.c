/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:51:07 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/21 16:51:30 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*sub_str(char *ret, char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (s[start] != '\0' && i < len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s)) 
	{
		ret = malloc(1);
		if (ret == NULL)
			return (NULL);
		ret[0] = '\0';
		return (ret);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ret = malloc((len + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	return (sub_str(ret, s, start, len));
}
