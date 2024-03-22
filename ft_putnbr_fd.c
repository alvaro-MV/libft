/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:22:25 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/22 18:17:58 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
//#include <fcntl.h>

void ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

// int	main()
// {
// 	int	n = 98298;
// 	int	fd;

// 	fd = open("pp.txt", O_WRONLY | O_TRUNC);
// 	ft_putnbr_fd(n, fd);
// }
