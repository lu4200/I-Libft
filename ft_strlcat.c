/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:54:03 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/09 16:46:18 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char *buffer, const char *src, size_t sizeTbuffer)
{
    size_t i;
    size_t j;
    size_t destsize;
    size_t srcsize;

    destsize = ft_strlen(buffer);
    srcsize = ft_strlen((char *)src);

    i = 0;
    while (buffer[i] != '\0')
        i++;
    j = 0;
    while(src[i] && i < sizeTbuffer - 1)
    {
        buffer[i] = src[j];
        i++;
        j++;
    }
    buffer[i] = '\0';
    return(srcsize + destsize);
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
