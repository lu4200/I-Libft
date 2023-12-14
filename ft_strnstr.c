/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:29:39 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/14 16:44:15 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index_meule;
	size_t	index_aiguille;

	index_meule = 0;
	index_aiguille = 0;
	if (!needle[0])
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while ((index_meule + index_aiguille <= len)
		&& haystack[index_meule] && haystack[index_meule])
	{
		if (needle[index_aiguille] != '\0'
			&& haystack[index_meule + index_aiguille] == needle[index_aiguille])
			index_aiguille++;
		else if (needle[index_aiguille] == '\0')
			return ((char *)&haystack[index_meule]);
		else
		{
			index_aiguille = 0;
			index_meule++;
		}
	}
	return (NULL);
}
