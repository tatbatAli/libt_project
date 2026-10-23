/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 22:27:44 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/18 12:25:26 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	num_len(int n)
{
	int	num_len;

	num_len = 0;
	if (n < 0)
		num_len++;
	while (n != 0)
	{
		n = n / 10;
		num_len++;
	}
	return (num_len);
}

static char	*filling_str(char *s, int len, long n, int stop)
{
	while (len > stop)
	{
		len--;
		s[len] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}

char	*ft_itoa(int c)
{
	int		len;
	int		stop;
	long	n;
	char	*str;
	char	*res;

	if (c == 0)
		return (ft_strdup("0"));
	n = c;
	stop = 0;
	len = num_len(c);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (c < 0)
	{
		n *= -1;
		str[0] = '-';
		stop = 1;
	}
	res = filling_str(str, len, n, stop);
	return (res);
}
