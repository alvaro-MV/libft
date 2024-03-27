/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaro <alvaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:09:27 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/27 02:14:14 by alvaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;

	if (!(*s1))
		return (NULL);
	len = 0;
	while (s1[len])
		len++;
	ptr = (char *) malloc(len + 1);
	if (ptr == 0)
		return (NULL);
	ft_memcpy(ptr, s1, len);
	return (ptr);
}

// int	main()
// {
// 	const char	s1[] = "YAAAAAAAAAAAAAAAAAAA";
// 	const char	s2[] = "No tengo tiempo para dedicarle";
// 	char		*ptrm = ft_strdup(s1);
// 	char		*ptro = strdup(s2);
// 	printf("ptrm: %s\n", ptrm);
// 	printf("ptro: %s\n", ptro);
// 	free(ptrm);
// 	free(ptro);
// }

/*
 * Buscar si el resultado de malloc puede ser null.
 *
 * Hacer el make para importar libft.h.
 */
