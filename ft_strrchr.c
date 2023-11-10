/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:34:41 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/10 13:07:21 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*mem;
	int		i;

	i = 0;
	mem = NULL;
	while (s[i])
    {
		if (s[i] == (char)c)
			mem = (char *)&s[i];
        i++;
    }
	return (mem);
}
