/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:06:53 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/18 16:27:13 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	int	i;

	if (dest > src)
	{
		i = (int)size - 1;
		while (i >= 0)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)size)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dest);
}
