/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:50:59 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/14 16:37:05 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*dest;
	int		lendest;
	size_t	i;

	lendest = ft_strlen(str1);
	dest = malloc(sizeof(char) * lendest + 1);
	if (!dest)
		return (NULL);
	if (str1 || dest)
	{
		i = 0;
		while (str1[i])
		{
			dest[i] = str1[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
