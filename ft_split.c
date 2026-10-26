/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:28:49 by atatbat           #+#    #+#             */
/*   Updated: 2026/10/26 14:28:51 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	words_in_s;

	i = 0;
	words_in_s = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words_in_s++;
		i++;
	}
	return (words_in_s);
}

static int	word_size(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	**freeing_memory(char **arr, int j)
{
	while (j > 0)
	{
		j--;
		free(arr[j]);
	}
	free(arr);
	return (NULL);
}

static char	**splitting(char const *s, char c, char **arr, int size)
{
	int	i;
	int	j;
	int	len_words;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		len_words = word_size(s + i, c);
		arr[j] = ft_substr(s, i, len_words);
		if (!arr[j])
			return (freeing_memory(arr, j));
		i += len_words;
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**arr;
	char	**res;

	if (!s)
		return (NULL);
	size = count_words(s, c);
	arr = malloc((size + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	res = splitting(s, c, arr, size);
	return (res);
}
