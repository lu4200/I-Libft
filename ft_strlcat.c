/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:54:03 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/18 16:22:25 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	while (*dst != '\0' && i < size)
	{
		dst++;
		i++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	while (*src)
	{
		if (i < size - 1)
			*dst++ = *src;
		src++;
		i++;
	}
	*dst = '\0';
	return (i + ft_strlen(src));
}
