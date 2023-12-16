/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:58:34 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/16 18:50:18 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;

	if (!dest && !src)
		return (dest);
	t1 = (unsigned char *)dest;
	t2 = (unsigned char *)src;
	while (n > 0)
	{
		*t1++ = *t2++;
		n--;
	}
	return (dest);
}
