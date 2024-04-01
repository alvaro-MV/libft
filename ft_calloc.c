/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:52:04 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/01 13:23:00 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
 * Devuelve un puntero void a el primer elemento de la cadena. 
 *Lo que no tengo claro es que luego el puntero devuelto lo trata como un array.

 Controlar si uno de los argumentos es cero. 
 */

// int main()
// {

// 	// This pointer will hold the
// 	// base address of the block created
// 	char** ptr;
// 	int n, i;

// 	// Get the number of elements for the array
// 	n = 7;
// 	printf("Enter number of elements: %d\n", n);

// 	// Dynamically allocate memory using calloc()
// 	ptr = (char**)ft_calloc(n, 7);

// 	if (ptr == NULL) {
// 		printf("Memory not allocated.\n");
// 		exit(0);
// 	}
// 	else {
// 		for (i = 0; i < n; ++i) {
// 			ptr[i] = "Frente";
// 		}

// 		// Print the elements of the array
// 		printf("The elements of the array are: ");
// 		for (i = 0; i < n; ++i) {
// 			printf("%s, ", ptr[i]);
// 		}
// 		free(ptr);
// 	}

// 	return 0;
// }
