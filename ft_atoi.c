/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:24:25 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/31 10:55:24 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calculate_number(const char *s, int i, int count_minus)
{
	int	res;

	res = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	if (count_minus)
		return (res * (-1));
	return (res);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	count_minus;
	int	res;

	i = 0;
	count_minus = 0;
	res = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			count_minus = 1;
		i++;
	}
	res = calculate_number(s, i, count_minus);
	return (res);
}
