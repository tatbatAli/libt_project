/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:51:39 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/19 14:44:41 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

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
