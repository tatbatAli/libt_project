/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 08:59:23 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/23 09:40:18 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

unsigned int	ft_lstsize(t_list *list)
{
	t_list			*tmp;
	unsigned int	list_size;

	tmp = list;
	list_size = 0;
	while (tmp)
	{
		list_size++;
		tmp = tmp->next;
	}
	return (list_size);
}
