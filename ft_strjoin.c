/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 21:44:45 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/25 09:57:54 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joined_str;

	if (!s1 && !s2)
		return (NULL);
	s1_len = 0;
	s2_len = 0;
	if (s1)
		s1_len = ft_strlen(s1);
	if (s2)
		s2_len = ft_strlen(s2);
	joined_str = malloc(((s1_len + s2_len) + 1) * sizeof(char));
	if (!joined_str)
		return (NULL);
	if (s1)
		ft_strlcpy(joined_str, s1, s1_len + 1);
	if (s2)
		ft_strlcpy(joined_str + s1_len, s2, s2_len + 1);
	return (joined_str);
}
