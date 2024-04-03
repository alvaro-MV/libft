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
#include <string.h>

static int	len_cal(char const *s, char c)
{
	int	token;
	int	i;

	i = 0;
	token = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			token += 1;
		i++;
	}
	return (token);
}

static void	get_sep(unsigned int *start, unsigned int *next,
char const *s, char c)
{
	int				found;
	unsigned int	i;

	found = 0;
	i = *next;

	*next = 0;
	while (s[*start] && s[*start] == c)
	{
		*start = *start + 1;
	}
	while (s[*start] && s[*start] != c)
	{
		*next = *next + 1;
		*start = *start + 1;
	}
	//printf("----------\n");
	// while (s[i] && !found)
	// {
	// 	if (s[i] == c && s[i + 1] != c)
	// 		*start = i + 1;
	// 	if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
	// 	{
	// 		*next = i + 1;
	// 		found = 1;
	// 	}
	// 	i++;
	// }
}

static char	**release(char **marr, int i)
{
	while (i > 0)
	{
		free(marr[i]);
		i--;
	}
	free(marr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int					len;
	int					i;
	unsigned int		start;
	unsigned int		next;
	char				**marr;

	if (s == NULL)
		return (NULL);
	len = len_cal(s, c);
	i = 0;
	start = 0;
	next = 0;
	marr = (char **) malloc((len + 1) * sizeof(char *));
	if (marr == NULL)
		return (NULL);
	while (i < len)
	{
		get_sep(&start, &next, s, c);
		marr[i] = ft_substr(s, start - next, next);
		if (marr[i] == NULL)
			return (release(marr, i));
		i++;
	}
	marr[i] = NULL;
	return (marr);
}

// int	main(void)
// {
// 	char	s[] = "";
// 	char	**marr = ft_split(s, 'z');
// 	int		i = 0;

// 	while (marr[i] != NULL)
// 	{
// 		printf("%s\n", marr[i]);
// 		i++;
// 	}
// 	while (marr != NULL)
// 	{
// 		free(*marr);
// 		marr++;
// 	}
// 	return (0);
// }
