/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:26:05 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/14 16:45:20 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*new;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] != '\0' && is_in_set(s1[i], set))
		i++;
	if (i < len)
	{
		j = len - 1;
		while (is_in_set(s1[j], set))
			j--;
		len = j + 1 - (i);
	}
	else
		return (ft_strdup(""));
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, &s1[i], len + 1);
	return (new);
}
