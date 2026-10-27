/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:29:39 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/27 10:46:09 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	start_index(char const *s1, char const *set)
{
	int	z;
	int	i;

	z = 0;
	while (s1[z] != '\0')
	{
		i = 0;
		while (s1[z] != set[i] && set[i] != '\0')
			i++;
		if (set[i] == '\0')
			break ;
		z++;
	}
	return (z);
}

static size_t	end_index(char const *s1, char const *set, size_t s1_len)
{
	int	i;

	s1_len--;
	while (s1_len > 0)
	{
		i = 0;
		while (s1[s1_len] != set[i] && set[i] != '\0')
			i++;
		if (set[i] == '\0')
			break ;
		s1_len--;
	}
	return (s1_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	int		start;
	int		end;
	char	*sub_str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	s1_len = 0;
	s1_len = ft_strlen(s1);
	if (s1_len == 0)
		return (ft_strdup(""));
	start = start_index(s1, set);
	end = end_index(s1, set, s1_len);
	if (start > end)
		return (ft_strdup(""));
	sub_str = ft_substr(s1, start, (end - start + 1));
	return (sub_str);
}
