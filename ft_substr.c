/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:08:53 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/30 14:16:26 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    char *mem;
    
    i = 0;
    if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    if (start + len > ft_strlen(s))
        len = ft_strlen(s + start);
    mem = ft_calloc(len + 1, sizeof(char));
    if (!mem)
        return (NULL);
    ft_strlcpy(mem, s + start, len + 1);
    return (mem);
   
}
/*
#include <stdio.h>
int main()
{
    char const *s = "Bonjour Tout le Monde";
    unsigned int start = 0;
    size_t len = 0;

    printf("%s", ft_substr(s, start, len));
    return 0;

}*/

