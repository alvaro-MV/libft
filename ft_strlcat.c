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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	tlen;
	size_t		i;
	//int	catlen;

	i = 0;
	tlen = ft_strlen((const char *) dst) + ft_strlen(src);
	//catlen = dstsize - ft_strlen((const char *) dst) - 1;
	//if (dstsize < 0)
	//	catlen = ft_strlen(src);
	while (*dst && ft_strlen(dst) > dstsize)
		dst++;
	while ((i + ft_strlen(dst) < dstsize -1) && src[i])
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
// 	char	*dstm;

// 	dstm = "pqrstuvwxyz";
// 	// char    dsto[4] = "B";	
//     // char    src[] = "esto";
// 	printf("len_mine: %zu\t mine_str: %s\n",
// 		ft_strlcat(dstm, "abcd", 20), dstm);
// }

/*
Dice en el man que en principio no hay que contemplar la posibilidad
de que dst sea mayor que dstsize; tambien que si dstsize es 0,
entonces no hace falta hacer el NUl ter, porque no se concatena nada.
*/