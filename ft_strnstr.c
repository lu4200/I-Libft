/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:29:39 by lumaret           #+#    #+#             */
/*   Updated: 2023/11/29 17:21:23 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t index_meule;
    size_t index_aiguille;

    index_meule = 0;
    index_aiguille = 0;
    
    if (!needle)
        return ((char *)haystack);
    while (haystack[index_meule] && (index_meule + index_aiguille <= len))
    {
        if (needle[index_aiguille] != '\0' && 
        haystack[index_meule + index_aiguille] 
        == needle[index_aiguille])
        {
            index_aiguille++;
        }
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

/*the tips here is to increment index_meule until it find the first character
of the needle. As it find the first char of needle, index_meule stay at his value and
the index to increment is now (index_meule + index_aiguille). When all of needle is browsed
without error (increment index_aiguille), that returns a string begining with the char of
index_meule. We reset index_aiguille in de case where we found a part of needle in
haystack but not in entierty, so we go to the next char of haystack and retry to refind
the first char of needle. Fx : "Bonjour", needle = "our", the loop start when it finds
the first 'o', but restet bcz its a 'n' after and will increment until it finds a new
'o'*/