/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 22:03:48 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/17 08:43:32 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	start_index(char const *s1, char const *set)
{
	int	start;
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
	start = z;
	return (start);
}

static size_t	end_index(char const *s1, char const *set, size_t s1_len)
{
	int	i;
	int	end;

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
	end = s1_len;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	int		start;
	int		end;
	char	*sub_str;

	if (s1[0] == '\0')
		return (NULL);
	s1_len = ft_strlen(s1);
	start = start_index(s1, set);
	end = end_index(s1, set, s1_len);
	if (start > end)
		return (ft_strdup(""));
	sub_str = ft_substr(s1, start, (end - start + 1));
	return (sub_str);
}
