/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:34:41 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/14 17:25:47 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*mem;
	int	i;

	i = 0;
	mem = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			mem = (char *)&s[i];
		i++;
	}
	if (!s[i] && c == '\0')
		return ((char *)&s[i]);
	return (mem);
}
