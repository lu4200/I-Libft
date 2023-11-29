/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:50:59 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/29 17:24:15 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str1)
{
	char *dest;
	int	lendest;
    size_t i;

	lendest = ft_strlen((char *)str1);
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
