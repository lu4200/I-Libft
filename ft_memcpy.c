/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:58:34 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/18 16:27:54 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*m1;
	unsigned char	*m2;

	m1 = (unsigned char *)dest;
	m2 = (unsigned char *)src;
	while (n > 0)
	{
		*m1++ = *m2++;
		n--;
	}
	return (dest);
}
