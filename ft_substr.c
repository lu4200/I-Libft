/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:08:53 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/10 13:07:19 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    char *mem;
    
    i = 0;
    mem = (char *)malloc(sizeof(char) * len + 1);
    if (!mem)
        return (NULL);
    while(i < len && s[start])
    {
        mem[i] = s[start];
        i++;
        start++;
    }
    mem[i] = '\0';
    return(mem);
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

