/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:26:23 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/01 13:26:31 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;
	t_list	*holder;

	list = *lst;
	while (list != NULL)
	{
		holder = list;
		list = list->next;
	}
	holder->next = new;
}

//int	main(void)
//{
	//t_list	*new = &(t_list) {NULL, NULL};
	//t_list	*after = &(t_list) {NULL, NULL};
	//t_list	*list = &(t_list) {NULL, NULL};
	//double	val = 12.3;

	//ft_lstadd_front(&list, new);
	//after->content = (void *) &val;
	//ft_lstadd_back(&new, after);
	//printf("contenido_last: %f\n", *(double *) ft_lstlast(new)->content);
//}