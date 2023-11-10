/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:58:34 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/09 16:46:03 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* ft_memcpy(void *dst, const void *src, size_t len)
{
    size_t i;
    if (dst || src)
    {
        while (i < len)
        {
            *(unsigned char*)(src + i) = *(unsigned char *)(dst + i);
            i++;
        }
        return (dest);
    }
    return (NULL);
}