/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:56:38 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/20 18:39:52 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	str = (char *) malloc(len * sizeof(char));
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// char	rot_r(unsigned int r, char c)
// {
// 	if ((int) r + c < 255)
// 		return (r + c);
// 	else
// 		return (c);
// }

// int	main()
// {
// 	char const s[] = "Hola";
// 	char	*ptr;

// 	ptr = ft_strmapi(s, rot_r);
// 	printf("ptr: %s", ptr);
// 	free(ptr);
// }

// Una varaible función se define igual que cualquier otra variable, solo que 
// también hay que incluir el tipo de parámetros. Luego puedes pasarle cualquier 
// función que tenga los parámetros indicados. 
