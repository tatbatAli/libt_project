/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:28:29 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/26 14:28:31 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_pt;

	i = 0;
	s_pt = (unsigned char *)s;
	while (i < n)
	{
		s_pt[i] = (unsigned char)c;
		i++;
	}
	return (s);
}