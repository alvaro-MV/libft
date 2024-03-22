/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:42:12 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/20 15:19:00 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	init;

	init = start;
	ptr = (char *) ft_calloc(len, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s[init] && len--) 
	{
		ptr[init - start] = s[init];
		init++;
	}
	return (ptr);
}

// int	main()
// {
// 	char const	str[] = "Hola Adios";
// 	char		*ptr;

// 	ptr = ft_substr(str, 0, 5);
// 	printf("s: %s", ptr);
// 	free(ptr);
// }
