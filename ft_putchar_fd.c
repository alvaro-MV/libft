/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:43:39 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/20 17:10:03 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main()
// {
// 	int	fd;

// 	fd = open("pp.txt", O_APPEND);
// 	char	c = 'l';
// 	ft_putchar_fd(c, fd);
// }
