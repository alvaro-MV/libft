/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:00:51 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/20 18:36:09 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	ptr = (char *) malloc((l1 + l2) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strdup(ptr, s1, l1);
	ft_strdup(&ptr[l1 + 1], s2, l2); // También ft_memcpy(&ptr[l1 + 1], s2, l2)
}
