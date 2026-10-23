/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:39:58 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/20 12:36:24 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*a;
	t_list	*b;

	a = malloc(sizeof(t_list));
	if (!a)
		return (NULL);
	b = malloc(sizeof(t_list));
	if (!b)
		return (NULL);
	a->content = content;
	b->content = NULL;
	return (a);
}
