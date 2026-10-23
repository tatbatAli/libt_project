/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:08:44 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/16 11:46:51 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_pt;

	i = 0;
	s_pt = (unsigned char *)s;
	while (i < n && s_pt[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return (&s_pt[i]);
}
