/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:13:49 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/08 16:29:30 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return(1);
    return (0);
}

/*
#include <stdio.h>
int main()
{
    printf("%d", ft_isdigit('8'));
     return 0;
}*/