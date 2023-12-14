/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:37:49 by lucas             #+#    #+#             */
/*   Updated: 2023/12/14 18:41:38 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int			word;
	char const	*str;

	word = 0;
	str = s;
	while (*str)
	{
		if (*str != c)
		{
			word++;
			while (*str != c && *(str + 1) != '\0')
				str++;
		}
		str++;
	}
	return (word);
}

static int	ft_letter_count(char const *s, char c)
{
	int			letter;
	char const	*str;

	letter = 0;
	str = s;
	while (*str == c && *str)
		str++;
	while (*str != c && *str++)
		letter++;
	return (letter);
}

static char	*ft_clean(char **tab, int i)
{
	while (i > 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	char	*tab;
	int		i;

	if (s != NULL)
	{
		i = 0;
		t = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
		if (!s || t == NULL)
			return ((char **)ft_clean(t, i));
		while (*s)
		{
			if (*s != c)
			{
				tab = (char *)malloc(sizeof(char) * ft_letter_count(s, c) + 1);
				if (tab == NULL)
					return (NULL);
				ft_strlcpy(tab, s, ft_letter_count(s, c) + 1);
				*t++ = tab;
				i++;
				while (*s != c && *(s + 1) != '\0')
					s++;
			}
			s++;
		}
		*t = 0;
		return (t - i);
	}
	return (NULL);
}
