/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 21:44:45 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/17 09:01:51 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static char	*joining_strs(char const *s1, char const *s2, char *joined_str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s1[i] != '\0')
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		joined_str[i] = s2[x];
		i++;
		x++;
	}
	joined_str[i] = '\0';
	return (joined_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joined_str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = malloc(((s1_len + s2_len) + 1) * sizeof(char));
	if (!joined_str)
		return (NULL);
	joined_str = joining_strs(s1, s2, joined_str);
	return (joined_str);
}
