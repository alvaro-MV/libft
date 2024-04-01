/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:55:29 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/01 21:00:21 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	*startcmp(const char *s1, unsigned char *set)
{
	int				i;
	size_t			j;
	unsigned char	*ptrs1;

	i = 0;
	ptrs1 = (unsigned char *) s1;
	while (ptrs1[i])
	{
		j = 0;
		while (set[j] != ptrs1[i] && set[j])
			j++;
		if (j == ft_strlen((char *) set))
			break ;
		i++;
		//printf("valol: -%s\n", &ptrs1[i]);
	}
	return (&ptrs1[i]);
}

static int	fin_cmp(char const *s1, unsigned char *set)
{
	int	i;
	int	j;
	int	len_s1;
	int	len_set;

	len_s1 = ft_strlen((char *) s1);
	len_set = ft_strlen((char *) set);
	i = 0;
	while (s1[len_s1 -1 - i])
	{
		j = 0;
		while (set[j] != s1[len_s1 -1 - i] && set[j])
			j++;
		if (j == len_set)
			break ;
		i++;
	}
	return (len_s1 - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				end;
	unsigned char	*ptrs1;
	unsigned char	*ptrset;
	char			*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	ptrset = (unsigned char *) set;
	ptrs1 = startcmp(s1, ptrset);
	end = fin_cmp(s1, ptrset);
	ptr = (char *) malloc(end * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, ptrs1, end + 1);
	// if (end != 0)
	// 	ptr[end + 1] = '\0';
	return (ptr);
}

// int	main()
// {
// 	const char	s1[] = "   xxx   xxx";
// 	const char	set[] = " x"; //zsx, '\0' 
// 	char	*ptr;

// 	ptr = ft_strtrim(s1, set);
// 	printf("%s\n", ptr);
// 	free(ptr);	
// }
