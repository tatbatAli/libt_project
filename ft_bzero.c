/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:26:11 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/26 15:19:08 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s_pt;

	i = 0;
	s_pt = (unsigned char *)s;
	while (i < n)
	{
		s_pt[i] = 0;
		i++;
	}
}
