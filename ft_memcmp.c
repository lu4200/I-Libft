/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:11:31 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/14 16:34:43 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Définir deux tableaux de caractères à comparer
    char str1[] = "Hello, World!";
    char str2[] = "Hello, Woiverse!";

    // Comparer les deux blocs de mémoir
        printf("%d %c", ft_memcmp(str1, str2, 9), '\n');
        printf("%d", memcmp(str1, str2, 9));

    return 0;
}
*/