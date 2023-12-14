/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:02:58 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/14 17:24:18 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t		i;
	const char	*block;

	i = 0;
	block = (const char *)memoryBlock;
	while (i < size)
	{
		if (block[i] == searchedChar)
			return ((void *)(memoryBlock + i));
		i++;
	}
	return (NULL);
}
