/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:24:18 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/20 12:58:25by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_cal(char const *s, char c)
{
	int	token;
	int	i;

	i = 0;
	token = 0;
	while (s[i])
	{
		if (s[i] == c)
			token += 1;
		i++;
	}
	return (token + 1);
}

static int	get_sep(int start, char const *s, char c)
{
	int	next;

	//printf("start: %d\t", start);
	next = 0;
	while (s[start] != c && s[start])
	{
		next++;
		start++;
	}
	//printf("next: %d\n", next);
	return (next);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	int		start;
	int		next;
	char	**marr;

	len = len_cal(s, c); 
	i = 0;
	start = 0;
	marr = (char **) malloc(len * sizeof(char *));
	if (marr == NULL)
		return (NULL);
	while (i < len)
	{
		next = get_sep(start, s, c);
		marr[i] = ft_substr(s, start, next);  
		start += next + 1;
		i++;
	}
	return (marr);
}

// int	main()
// {
// 	char const	s[] = "applied directly to the structure definition itself.";
// 	char **marr = ft_split(s, ' ');
// 	int	i;

// 	i = 0;
// 	while(i < len_cal(s, ' '))
// 	{
// 		printf("s: %s\n", *marr);
// 		free(*marr);
//  		marr++;
// 		i++;
// 	}
// 	return (0);
// }
