/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaro <alvaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:42:12 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/27 02:29:18 by alvaro           ###   ########.fr       */
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
	ptr[0] = ""[0];
	while (s[init] && len-- && (init < ft_strlen(s))) 
	{
		ptr[init - start] = s[init];
		init++;
	}
	return (ptr);
}

//int	main()
//{
	//char const	str[] = "0123456789";
	//char		*ptr;

	//ptr = ft_substr(str, 9, 10);
	//printf("s: %s\n", ptr);
	//printf("cmp: %d\n", ft_strncmp("", ptr, 1));
	//free(ptr);
//}
