/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:32:29 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/14 22:02:21 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;

	ptrs = (unsigned char *) s;
	while (n--)
	{
		if (*ptrs == (unsigned char)c)
			return (ptrs);
		ptrs++;
	}
	return (0);
}

// int	main()
// {
// 	char	s[] = "Hola";
// 	int		c = 108;

// 	printf("ocurrence: %s\n", (unsigned char *) ft_memchr(s, c, 4));
// }

/*
Comparar teniendo en cuenta la función original. Probar con otros casos límite definidos en anteriores ejercicios.
*/
