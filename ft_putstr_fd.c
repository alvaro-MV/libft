/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:58:19 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/20 19:52:08 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

// int	main()
// {
// 	char	s[] = "Hola";
// 	int	fd;

// 	fd = open("pp.txt", O_WRONLY | O_APPEND);
// 	ft_putstr_fd(s, fd);
// }
