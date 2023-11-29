/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:26:05 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/29 18:56:04 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_in_set(char c, char const *set)
{
    int i;
    i = 0;
    while (set[i] != '\0')
    {
        if (c == set[i])
            return (1);
        i ++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char *new;
    int len;
    
    len = ft_strlen((char *)s1);
    i = 0;
    j = 0;
    while(s1[i] != '\0')
    {
        if (is_in_set(s1[i], set))
            len --;
        i++;
    }
    new = malloc(sizeof(char) * len);
    if (!new)
        return (NULL);
    i = -1;
    while(s1[++i])
    {
        if(is_in_set(s1[i], set) == 0)
        {
            new[j] = s1[i];
            j++;
        }
    }
    new[j] = '\0';
    return (new);
}
/*
#include <stdio.h>
int main ()
{
    char const *s1 = "<Hello zzz everyone!>";
    char const *set = "z ";
    printf("%s", ft_strtrim(s1, set));
    return 0;
}*/