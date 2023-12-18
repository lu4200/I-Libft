/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:37:49 by lucas             #+#    #+#             */
/*   Updated: 2023/12/18 15:58:15 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *str, char characters)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != characters)
		{
			count++;
			while (str[i] && str[i] != characters)
				i++;
		}
		else if (str[i] == characters)
			i++;
	}
	return (count);
}

static size_t	ft_countletter(char const *str, char characters)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != characters)
		i++;
	return (i);
}

static char	**spliit(char const *str, char characters, char **array,
		size_t words_count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words_count)
	{
		while (str[j] && str[j] == characters)
			j++;
		array[i] = ft_substr(str, j, ft_countletter(&str[j], characters));
		if (!array[i])
		{
			while (i > 0)
				free(array[i--]);
			free(array[0]);
			return (NULL);
		}
		while (str[j] && str[j] != characters)
			j++;
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *str, char characters)
{
	char	**tab;
	size_t	words;

	if (!str)
		return (NULL);
	words = ft_countword(str, characters);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	tab = spliit(str, characters, tab, words);
	return (tab);
}
