/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:28:12 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/26 14:28:14 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
