/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:05:01 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/30 15:26:13 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    if (!s || !f)
        return ((void)NULL);
    i = 0;
    while (s[i])
    {
        f((unsigned int)i, &s[i]);
        i++;
    }
}