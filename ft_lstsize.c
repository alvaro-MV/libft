#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int		contador;

	contador = 0;
	while(lst != NULL)
	{
		contador++;
		lst = lst->next;
	}
	return (contador);
}

int	main(void)
{
	t_list	*new = &(t_list) {"c", NULL};
	t_list	*after = &(t_list) {"after", NULL};
	t_list	*list = &(t_list) {"Hola", NULL};
	ft_lstadd_front(&list, new);
	ft_lstadd_front(&after, list);
	printf("len: %i\n", ft_lstsize(new));
}
