/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:50:59 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/09 16:46:08 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char *ft_strcpy(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1)
	{
		str2[i] = str1[i];
		i++;
	}
	return (str2);
}

char *ft_strdup(char *str1)
{
	char *dest;
	int	lendest;
    size_t i;

	lendest = ft_strlen(str1);
	dest = malloc(sizeof(char) * lendest + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str1)
	{
		dest[i] = str1[i];
		i++;
	}
	return (dest);
}
