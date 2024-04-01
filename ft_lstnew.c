/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:28:05 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/01 13:28:10 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_n;

	new_n = (t_list *) malloc(sizeof(t_list));
	//new_n->content = malloc(sizeof(content));
	//new_n->next = (t_list *) malloc(sizeof(t_list));
	new_n->content = content;
	new_n->next = NULL;
	return (new_n);
}

//int	main()
//{
	//t_list	*nodo;
	//char	conte[] = "Si yo te contara...";

	//nodo = ft_lstnew(conte);
	//printf("conte: %s\n", (char *) nodo->content);
	//printf("next: %s", (char *) nodo->next);
	//free(nodo);
//}
