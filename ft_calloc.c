/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:26:20 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/31 10:55:07 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	size_allocation;
	void	*alloc;

	if (nmemb == 0 || size == 0)
	{
		alloc = malloc(0);
		return (alloc);
	}
	if (SIZE_MAX / size < nmemb)
		return (NULL);
	size_allocation = (nmemb * size);
	alloc = malloc(size_allocation);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, size_allocation);
	return (alloc);
}
