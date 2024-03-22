/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:42:14 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/20 18:34:28 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	get_len(int nb)
{
	long	number;
	long	dec;

	number = (long) nb;
	dec = 1;
	if (number < 0)
		number *= -1;
	while (dec < number)
		dec *= 10;
	return (dec / 10);
}

char	*ft_itoa(int nb)
{
	int		digit;
	int		dlen;
	int		i;
	long	lnb;
	char	*ptr;

	dlen = get_len(nb);
	lnb = (long) nb;
	i = 0;
	ptr = (char *) malloc(12 * sizeof(char));
	if (lnb < 0)
	{
		ptr[i++] = '-';
		lnb *= -1;
	}
	while (lnb > 0)
	{
		digit = lnb / dlen;
		ptr[i] = digit + '0';
		lnb -= digit * dlen;
		i++;
		dlen /= 10;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	printf("num: %s", ft_itoa(-2147483648));
}
*/
