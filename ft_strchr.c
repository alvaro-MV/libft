/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:04:11 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/19 13:32:38 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    c = (char) c;
    while (*s)
    {
        if (*s == c)
			return ((char *) s);
        s++;
    }
    if (*s == c)
        return ((char *) s);
    else
        return (0);
}

// int main()
// {
//     const char s[] = "HOLLLa";
//     printf("str: %s\n", ft_strrchr(s, 'O'));
//     printf("str: %s\n", strchr(s, 'O'));
// }
