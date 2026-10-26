/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:29:31 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/26 14:29:32 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
