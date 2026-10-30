/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:28:53 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/30 11:36:13 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0'&&(unsigned char)s[i] != (unsigned char)c  )
	{
		i++;
	}
	if ((unsigned char)s[i] != (unsigned char)c)
		return (NULL);
	return ((char *)&s[i]);
}
