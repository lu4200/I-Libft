/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:02:58 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/09 10:49:50 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void * ft_memchr(const void * memoryBlock,int searchedChar,size_t size)
{
    size_t i;

    i = 0;
    const char *block = (const char *)memoryBlock;
    while (i < size)
    {
        if (block[i] == searchedChar)
            return(&block[i])
        i++;
    }
    return (NULL);
}

/* &block[i] can return the string from a rank until the end*/