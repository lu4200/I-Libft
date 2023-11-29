/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:19:37 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/29 17:28:34 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *new;
    int NewLen;

    if (s == NULL || f == NULL)
        return (NULL);
    NewLen = ft_strlen(s);
    new = (char *)malloc(sizeof(char) * NewLen + 1);
    if (!new)
        return (NULL);
    i = 0;
    while (s[i])
    {
        new[i] = f(i, s[i]);
        i++;
    }
    new[i] = '\0';
    return (new);
}

/*we can define a char * value from the result of a fonction, a pointer to this fonction 
(precedently defined in the main) will be used*/