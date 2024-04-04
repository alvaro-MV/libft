/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:50:09 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/04 19:23:26y alvmoral         ###   ########.fr       */
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
	catlen = dstsize - ft_strlen((const char *) dst) -1;
	if (dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (*dst)
		dst++;
	while (i < catlen && src[i])
	{
		*dst = src[i];
		i++;
		dst++;
	}
	*dst = '\0';
	return (tlen);
}

// int main()
// {
//     char    dstm[] = "CCCCC";
// 	char    dsto[4] = "B";	
//     char    src[] = "AAAAAAAAA";
//     // size_t	len = 41;
// 	printf("len_mine: %zu\t mine_str: %s\n", ft_strlcat(dstm, src, -1), dstm);
// 	// printf("len_mine: %zu\t mine_str: %s", strlcat("pqrstuvwxyz", "abcd", 20), dsto);	
// 	printf("logic: %d", ft_strlcat(dstm, src, -1) == 14 && !strcmp(dstm, "CCCCCAAAAAAAAA"));
// }

/*
Dice en el man que en principio no hay que contemplar la posibilidad
de que dst sea mayor que dstsize; tambien que si dstsize es 0,
entonces no hace falta hacer el NUl ter, porque no se concatena nada.
*/