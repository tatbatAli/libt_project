/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:04:20 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/16 17:48:21 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		s_len;
	char	*s_new;

	s_len = ft_strlen(s);
	s_new = malloc((s_len + 1) * sizeof(char));
	if (!s_new)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s_new[i] = s[i];
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
