/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:28:17 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/31 10:50:31 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_ptr;
	const unsigned char	*s2_ptr;

	i = 0;
	s1_ptr = (const unsigned char *)s1;
	s2_ptr = (const unsigned char *)s2;
	while (i < n && s1_ptr[i] == s2_ptr[i])
		i++;
	if (i == n)
		return (0);
	return (s1_ptr[i] - s2_ptr[i]);
}
