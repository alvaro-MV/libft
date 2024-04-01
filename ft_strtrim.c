/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:55:29 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/01 14:00:12 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	*startcmp(const char *s1, const char *set)
{
	int				i;
	unsigned char	*ptrs1;
	unsigned char	*ptrset;

	i = 0;
	ptrs1 = (unsigned char *) s1;
	ptrset = (unsigned char *) set;
	while (ptrs1[i] == ptrset[i] && ptrs1[i] != 0
		&& ptrs1[i] != 0)
		i++;
	return (&ptrs1[i]);
}

static int	fin_cmp(unsigned char *s1, unsigned char *set)
{
	int	end;
	int	len_s1;
	int	len_set;

	len_s1 = ft_strlen((char *) s1);
	len_set = ft_strlen((char *) set);
	end = 0;
	while (s1[len_s1 -1] == set[len_set -1])
	{
		end++;
		len_s1--;
		len_set--;
	}
	len_s1 = ft_strlen((char *) s1);
	return (len_s1 - end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				end;
	unsigned char	*ptrs1;
	unsigned char	*ptrset;
	unsigned char	*ptr;

	ptrset = (unsigned char *) set;
	ptrs1 = startcmp(s1, set);
	end = fin_cmp(ptrs1, ptrset);
	ptr = (unsigned char *) malloc(end * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	return (ft_memcpy(ptr, ptrs1, end));
}

// int	main()
// {
// 	const char	s1[] = "cocacolacoca";
// 	const char	set[] = "\0"; //zsx, '\0' 
// 	char	*ptr;

// 	ptr = ft_strtrim(s1, set);
// 	printf("str: %s", ptr);
// 	free(ptr);	
// }
