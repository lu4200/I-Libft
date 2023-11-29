/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:40:07 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/29 17:25:19 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    char *new;
    int SizeOfNew;
    size_t j;

    SizeOfNew = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
    new = malloc(sizeof(char) * SizeOfNew + 1);
    if (!new)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        new[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        new[i] = s2[j];
    }
    new[i] = '\0';
    return (new);
}