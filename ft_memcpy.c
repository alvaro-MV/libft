/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:41:45 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/01 13:43:45 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;
	size_t			i;

	ptrdst = (unsigned char *) dst;
	ptrsrc = (unsigned char *) src;
	i = 0;
	while (n--)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (ptrdst);
}

// int	main()
// {
// 	char	dst[20] = "Hola";
// 	char	src[20] = "Adios.";
// 	//int	dst = 9;
// 	//int	src = 5;

// 	ft_memcpy(&dst, &src, sizeof(dst));
// 	printf("dst: %s\n", dst);
// 	memcpy(&dst, &src, sizeof(dst));
// 	printf("fun: %s\n", dst);

// }

/*
Si n vale cualquier otra cosa 
y es un puntero nulo (void *),
 da segmentation fault. Controla ese caso.
*/

/*
 * Probar para structs.
 *
 * Para arrays, para ints.
 *
 * Comprobar que no se solapan.
 *
 * si se cortan cuando n = 0.
 *
 * probar para overlapping.
 */
