/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:45:42 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/22 13:07:02 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	tlen;
	int		i;

	i = 0;
	tlen = ft_strlen(src);
	if (dstsize > 0)
	{
		while (i < (int) dstsize -1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (tlen);
}

// int	main(void)
// {
// 	char		dst[] = "Estamos aquí probando";
// 	char		dstp[] = "Estamos aquí probando";
// 	char const	src[] = "Asi ";
// 	int			dstsize = 8;

// 	printf("blen: %zu \t dst: %s\n", strlcpy(dst, src, dstsize), dst);
// 	printf("blen: %zu \t dst: %s", ft_strlcpy(dstp, src, dstsize), dstp);
// }

/*Cuando se dstsize es mayor que la longitud de dstp, entoces strlcpy 
genera un error hardware instruction,
mientras que mi función no; no se hasta que punto tengo que replicar eso.

*/