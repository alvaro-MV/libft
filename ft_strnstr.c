/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:31:44 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/20 19:52:20 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char	*haystack, const char	*needle,  size_t len)
{
	int		i;
	int		count;
	int		j;

	count = 0;
	while (needle[count])
		count++;
	if (count == 0)
		return ((char *) haystack);
	i = 0;
	j = 0;
	while (haystack[i] && --len)
	{
		while ((needle[j] == haystack[i + j]))
		{
			if (j + 1 == count)
				return ((char *) (haystack + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

// int	main()
// {
// 	char	str[] = "LOs Illyis son";
// 	char	to_find[] = "ly";

// 	printf("mine: %s\n", ft_strnstr(str, to_find, 8));
//     printf("orig: %s", strnstr(str, to_find, 8));
// }

