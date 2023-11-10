/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:06:53 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/10 13:10:41 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memmove(void * dest, const void * src, size_t size)
{
    int i;

    if (dest || src)
    {
        if (dest > src && dest-src < (int)size)
        {
            i = (int)size - 1;
            while(i >= 0)
            {
                *(unsigned char*)(dest + i) = *(unsigned char *)(src + i);
                i--;
            }
        }
        if (src > dest && src-dest < (int)size)
        {
            i = 0;
            while (i < (int)size)
            {
                *(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
                i++;
            }
        }
    }
    return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    
    char *data = "Bonjour Arthur";

    for( int i=0; i< 15; i++ ) 
    {
        printf( "%c ", data[i] );
    }
    puts("");

    void * source = (void *) data;
    void * destination = (void *) ( data + 1 );
    size_t size = 15 * sizeof( char );
    ft_memmove(destination, source, size);
    
    data[0] = 'A';

    for( int i=0; i< 15; i++ ) 
    {
        printf("%c", data[i]);
    }
    puts("");

    return 0;
} */