/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isacii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:46:26 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/20 17:15:28 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 32 && c <= 128)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int	c;

// 	c = 102;
//     printf("num: %d\n", isascii(c));
// 	printf("num: %d", ft_isacii(c));
//     return (0);
// }
