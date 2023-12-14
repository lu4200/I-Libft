/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:40:07 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/14 17:46:36 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		sizeofnew;

	if (s1 && s2)
	{
		sizeofnew = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
		new = malloc(sizeof(char) * sizeofnew + 1);
		if (!new)
			return (NULL);
		ft_strlcpy(new, s1, ft_strlen(s1) + 1);
		ft_strlcat(new, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
		return (new);
	}
	return (NULL);
}
