/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:52:31 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/04 23:13:32 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *))
{
	t_list  *lstmap;
	t_list	*holder;
	int		contador;

	contador = 0;
	while (lst != NULL)
	{
		holder = lst;
		lst = lst->next;
		del 
		holder-> content = f(holder->content);
		contador++;
	}
	lstmap = (t_list *) malloc(contador * sizeof(t_list));
	ft_memcpy(lstmap, lst, contador);
	return (lstmap);
}
