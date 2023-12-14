/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:54:03 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/14 16:38:46 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	i;
	size_t	j;

	srcsize = 0;
	while (src[srcsize])
		srcsize++;
	if (size == 0)
		return (srcsize);
	i = 0;
	while (dst[i])
		i++;
	if (size < i)
		return (size + srcsize);
	j = 0;
	while (i + j < size - 1 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + srcsize);
}
