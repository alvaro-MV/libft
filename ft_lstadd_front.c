#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*list;

	list = *lst;
	new->next = list;
}

//int	main()
//{
	//t_list	new = (t_list) {"c", NULL};
	//t_list	*list = ft_lstnew("Hola");
	//ft_lstadd_front(&list, &new);
	//printf("conte: %s\n", (char *) new.content);
	//printf("next: %s\n", (char *) new.next->content);	
	//free(list);
//}