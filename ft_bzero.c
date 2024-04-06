/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:57:05 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/06 14:59:53 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n > 0)
	{
		while (n--)
		{
			*(char *) s = 0;
			s++;
		}
	}
}

// int	main()
// {
// 	char	s[12] = "Hola";
// 	char	ptr[12] = "Hola";

// 	ft_bzero(s, 3);
// 	printf("size: %lu\t s: %s\n", sizeof(s), s);
// 	bzero(ptr, 3);
// 	printf("size: %lu\t ptr: %s\n", sizeof(ptr), ptr);
// 	return (0);
// }
