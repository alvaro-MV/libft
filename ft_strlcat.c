/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:44:46 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/22 15:35:08by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  Tlen;
    int 	Catlen;
    int     i;

    i = 0;
    Tlen = ft_strlen((const char *) dst) + ft_strlen(src);
    Catlen = dstsize - ft_strlen((const char *) dst) -1; //dos posibilidades: o que sea negativo o si es positivo: que quepa dst en 
    while (*dst)
        dst++;
    while (i < Catlen)
    {
		*dst = src[i];
		i++;
		dst++;
    }
	if (Tlen - ft_strlen(src) < dstsize)
    	*dst = '\0';
    else
        Tlen = dstsize + ft_strlen(src);    
    return (Tlen);
}

// int main()
// {
//     char    dstm[43] = "Hola";
// 	char    dsto[43] = "Hola";	
//     char    src[] = " Adios";
//     size_t	len = 41;
	
//     printf("len_mine: %zu\t mine_str: %s\n", ft_strlcat(dstm, src, len), dstm);
// 	printf("len_mine: %zu\t mine_str: %s", strlcat(dsto, src, len), dsto);	
// }

/*
Dice en el man que en principio no hay que contemplar la posibilidad
de que dst sea mayor que dstsize; tambien que si dstsize es 0,
entonces no hace falta hacer el NUl ter, porque no se concatena nada.
*/