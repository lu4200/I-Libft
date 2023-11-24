/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:37:49 by lucas             #+#    #+#             */
/*   Updated: 2023/11/07 19:12:46 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_size(char *str, char *charset)
{
	int	i;
	int	sep;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		sep = is_sep(str[i], charset);
		if ((i == 0 && !sep) || (i > 0 && !sep && is_sep(str[i - 1], charset)))
			count++;
		i++;
	}
	return (count);
}

int	next_split(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			return (i);
		i++;
	}
	return (i);
}

char	*ft_strndup(char *str, unsigned int n)
{
	unsigned int	i;
	char			*new;

	i = 0;
	while (str[i] && i < n)
		i++;
	new = (char *)malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (str[i] && i < n)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	int		i;
	int		len;
	char	**strs;

	size = count_size(str, charset);
	strs = (char **)malloc(sizeof(char *) * (size + 1));
	strs[size] = NULL;
	if (!strs)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (is_sep(*str, charset))
			str++;
		len = next_split(str, charset);
		strs[i] = ft_strndup(str, len);
		str += len;
		i++;
	}
	return (strs);
}

/*#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	char	**s = ft_split(av[1], av[2]);
	int i = 0;
	while (s[i])
	{
		printf("%s\n", s[i]);
		i++;
	}
	return (0);
}*/
