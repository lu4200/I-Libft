/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:49:27 by lucas             #+#    #+#             */
/*   Updated: 2023/11/09 14:31:52 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr(int nb)
{
	int	count;
	
	if (nb == 0)
		return 1;
	count = 0;
	if (nb < 0)
	{
		nb *=-1;
		count ++;
	}
	while(nb > 0)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int	nb_len = 0;
	int i = 0;
	char	*dest;
	int nb;

	nb = nbr;
	nb_len = len_nbr(nb);
	dest = (char *)malloc(sizeof(char) * nb_len + 1);
	if (!dest)
		return (NULL);
	if(nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	i = nb_len + 2;
	while (nb > 0)
	{
		dest[i--] = nb % 10 + '0';
		nb /= 10;
	}
	return (dest);
}

#include <stdio.h>
int main() {
	
    int number = 123124; // Remplacez 42 par le nombre que vous souhaitez convertir en chaîne
    printf("Le nombre en tant que chaîne de caractères : %s\n", ft_itoa(number));

    return 0;
}