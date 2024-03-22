/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:13:34 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/20 17:04:41 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int ft_isalpha(int c)
{
    if (c >= 65 && c <= 90)    
        return (1);
    else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int	c;

// 	c = 102;
//     printf("num: %d\n", isalpha(c));
// 	printf("num: %d", ft_isalpha(c));
//     return (0);
// }
