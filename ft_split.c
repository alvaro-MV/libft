/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:45:41 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/01 17:32:38by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_cal(char const *s, char c)
{
	int	token;
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	token = 0;
	while (s[i])
	{
		if (s[i] == c && flag)
		{
			token += 1;
			flag = 0;
		}
		else if (s[i] != c)
			flag = 1;
		i++;
	}
	return (token + 1);
}

static int	get_sep(int start, char const *s, char c)
{
	int	next;

	next = 0;
	while (s[start] != c && s[start])
	{
		next++;
		start++;
	}
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
		if (next != 0)
		{
			marr[i] = ft_substr(s, start, next);
			i++;
		}
		start += next + 1;
	}
	marr[i] = NULL;
	return (marr);
}

// int	main()
// {
// 	char const	s[] = "No  sabes ";
// 	char **marr = ft_split(s, ' ');
// 	int	i;
// 	int	len = len_cal(s, ' ');

// 	i = 0;
// 	while (i < len)
// 	{
// 		printf("%s\n", *marr);
// 		free(*marr);
// 		marr++;
// 		i++;
// 	}
// 	return (0);
// }
