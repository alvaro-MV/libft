/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:15:57 by alvmoral          #+#    #+#             */
/*   Updated: 2024/03/22 13:19:15 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptrs1;
    unsigned char *ptrs2;

    ptrs1 = (unsigned char *) s1;
    ptrs2 = (unsigned char *) s2;
    while (*ptrs1 && *ptrs2 && n--)
    {
        if (*ptrs1 != *ptrs2)
            return (*ptrs1 - *ptrs2);                 
        ptrs1++;
        ptrs2++;        
    }
    return (0);
}

// int main()
// {
//     char    s1[] = "xerro";
//     char    s2[] = "perro";
//     int     valor;
    
//     valor = ft_memcmp(s1, s2, sizeof(s1));
//     printf("valor: %d\n", valor);
// }
