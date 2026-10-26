/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:28:53 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/26 14:28:55 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((unsigned char)s[i] != (unsigned char)c && s[i] != '\0')
	{
		i++;
	}
	if ((unsigned char)s[i] != (unsigned char)c)
		return (NULL);
	return ((char *)&s[i]);
}
