/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:50:14 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/30 14:02:18 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] && dstsize > 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (dest > 0)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*loop until the dstsize - 1 to be sure that you can done the current string with a '\0'*/