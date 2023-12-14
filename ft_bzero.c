/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:37:36 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/14 16:29:12 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			*(unsigned char *)(s + i) = '\0';
			i ++;
		}
	}
}

/*casting can be consider any type of memory not just char **/