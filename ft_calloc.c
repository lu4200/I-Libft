/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:49:09 by lucas             #+#    #+#             */
/*   Updated: 2023/12/17 14:32:09 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	void	*mem;
	size_t	element_size_max;

	element_size_max = elementCount * elementSize;
	if (elementCount != 0 && element_size_max / elementCount != elementSize)
		return (NULL);
	mem = malloc(elementSize * elementCount);
	if (!mem)
		return (NULL);
	ft_bzero(mem, elementCount * elementSize);
	return (mem);
}

/*malloc w bzero to clean a block of memory*/