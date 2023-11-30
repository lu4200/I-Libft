/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:54:03 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/30 14:30:06 by lumaret          ###   ########.fr       */
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

/*
#include <stdio.h>
#include <bsd/string.h>
int main()
{
    char buffer[200] = "";
    char src[200] = "";
    size_t sizeTbuffer = 11;

    printf("%d", ft_strlcat(buffer, src, sizeTbuffer));
    return 0;
}*/
