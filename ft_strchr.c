/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:49:52 by lucas             #+#    #+#             */
/*   Updated: 2023/12/17 13:39:17 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar )
{
	int			i;
	char		charactere;

	charactere = (char)searchedChar;
	i = 0;
	while (string[i])
	{
		if (string[i] == charactere)
			return ((char *)&string[i]);
		i++;
	}
	if (!string[i] && charactere == '\0')
		return ((char *)&string[i]);
	return (NULL);
}
