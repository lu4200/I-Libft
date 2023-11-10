/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:49:52 by lucas             #+#    #+#             */
/*   Updated: 2023/11/10 13:07:13 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr( const char *string, int searchedChar )
{
    int i;

    i = 0;
    while (string[i])
    {
        if (string[i] == searchedChar)
            return (&string[i]);
        i++;  
    }
    if (!string[i] && searchedChar == '/0')
            return (&string[i]);
    return (NULL);
}