/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 22:47:12 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/20 18:40:07 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	char	*str;
	unsigned int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	str = (char *) malloc(len * sizeof(char));
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return (str);
}

// char	rot_r(unsigned int r, char *c)
// {
// 	if ((int) r + *c < 255)
// 		*c += r;
// }

// int	main()
// {
// 	char const s[] = "Hola";
// 	char	*ptr;

// 	ptr = ft_strmapi(s, rot_r);
// 	printf("ptr: %s", ptr);
// 	free(ptr);
// }	
