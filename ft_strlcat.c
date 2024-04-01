/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:50:09 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/01 13:58:03 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	tlen;
	int		catlen;
	int		i;

	i = 0;
	tlen = ft_strlen((const char *) dst) + ft_strlen(src);
	catlen = dstsize - ft_strlen((const char *) dst) - 1;
	while (*dst)
		dst++;
	while (i < catlen)
	{
		*dst = src[i];
		i++;
		dst++;
	}
	if (tlen - ft_strlen(src) < dstsize)
		*dst = '\0';
	else
		tlen = dstsize + ft_strlen(src);
	return (tlen);
}

// int main()
// {
//     char    dstm[43] = "Hola";
// 	char    dsto[43] = "Hola";	
//     char    src[] = " Adios";
//     size_t	len = 41;
//	
//printf("len_mine: %zu\t mine_str: %s\n", ft_strlcat(dstm, src, len), dstm);
// 	printf("len_mine: %zu\t mine_str: %s", strlcat(dsto, src, len), dsto);	
// }

/*
Dice en el man que en principio no hay que contemplar la posibilidad
de que dst sea mayor que dstsize; tambien que si dstsize es 0,
entonces no hace falta hacer el NUl ter, porque no se concatena nada.
*/